#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


# from simple_interfaces.msg import Twist
from geometry_msgs.msg import Twist
# from simple_interfaces.msg import LedStateArray
# from simple_interfaces.srv import SetLed


class JoystickListener(Node):
    def __init__(self):
        super().__init__("joystick_listener2") 
        self.get_logger().info("joystick_listener2 publisher node has started")
        self.joytick_state_subscriber_= self.create_subscription(Twist, "joystick_state2",self.twist_callback, 10)


    def twist_callback(self, msg):
        self.get_logger().info(f'Received Twist222: Linear X={msg.linear.x}, Angular Z={msg.angular.z}')


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
