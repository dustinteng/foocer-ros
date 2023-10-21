#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from simple_interfaces.msg import LedStateArray
from simple_interfaces.srv import SetLed

class LedPanelNode(Node):
    def __init__(self):
        super().__init__("led_panel") 
        self.get_logger().info("led_panel publisher node has started11")
        self.led_states_ = [0, 0, 0]
        self.led_state_publisher_= self.create_publisher(LedStateArray, "led_states", 10)
        self.led_states_timer_ = self.create_timer(4, self.publish_led_states)
        #lets make a service server right here v
        self.set_led_service_ = self.create_service(SetLed,"set_led", self.callback_set_led)

        self.get_logger().info("led_panel publisher node has started")

    def publish_led_states(self):
        msg = LedStateArray()
        msg.led_states = self.led_states_
        self.led_state_publisher_.publish(msg)

    def callback_set_led(self, request, response):
        led_number = request.led_number
        state = request.state
        # check the params we get using conditions or validate
        #if the number is bigger than the length of the array or less or eq to 0
        if led_number >len(self.led_states_) or led_number <= 0:
            response.success = False
            return response
        #checkf if state gives 0 or 1 as a response if not -> badbad
        if state not in [0,1]:
            response.success = False
            return response
        #action -> the led_states
        self.led_states_[led_number-1] = state
        response.success = True
        #we have to remember to publish the states again.
        self.publish_led_states()
        return response


def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
