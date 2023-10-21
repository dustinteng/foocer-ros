#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


# from simple_interfaces.msg import Twist
from geometry_msgs.msg import Twist
# from simple_interfaces.msg import LedStateArray
from simple_interfaces.srv import SetLed


class JoystickNode(Node):
    def __init__(self):
        super().__init__("joystick") 
        self.get_logger().info("joystick_publisher node has started")
        self.joystick_state_publisher= self.create_publisher(Twist, "joystick_state", 10)
        



def main(args=None):
    rclpy.init(args=args)
    node = JoystickNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
