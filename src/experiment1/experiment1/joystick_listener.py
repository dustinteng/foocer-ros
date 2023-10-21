#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from simple_interfaces.srv import SetJoystickScalar
from functools import partial
from geometry_msgs.msg import Twist


class JoystickListener(Node):
    def __init__(self):
        super().__init__("joystick_listener") 
        self.get_logger().info("joystick_listener publisher node has started")
        self.joytick_state_subscriber_= self.create_subscription(Twist, "joystick_state",self.twist_callback, 10)
        self.joystick_magnitude_ = 1.11
        

    def twist_callback(self, msg):
        # self.get_logger().info(f'Received Twist: Linear X={msg.linear.x}, Angular Z={msg.angular.z}')
        # self.get_logger().info("message type :" + str(type(msg.linear.x)) )
        self.joystick_panel_call_state(msg.linear.x)

    def joystick_panel_call_state(self, magnitude):
        # self.get_logger().info("mag :" + str(magnitude)) 

        self.call_set_joystick_panel_server(magnitude)


    def call_set_joystick_panel_server(self, magnitude):
        client = self.create_client(SetJoystickScalar,"set_joystick_scalar")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("waiting for joystick_panel_server")

        request = SetJoystickScalar.Request()
        # request.joystick_name = joystick_name
        request.magnitude = magnitude

        future = client.call_async(request)
        future.add_done_callback(
            partial(self.callback_call_set_joystick_magnitude, magnitude=magnitude))
        
    def callback_call_set_joystick_magnitude(self, future, magnitude):
        try:
            response = future.result()
            # self.get_logger().info(str(response.success))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))
    # def create_twist_message(linear_x, angular_z):
    #     twist_msg = Twist()
    #     twist_msg.linear.x = linear_x
    #     twist_msg.angular.z = angular_z
    #     return twist_msg



def main(args=None):
    rclpy.init(args=args)
    node = JoystickListener()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
