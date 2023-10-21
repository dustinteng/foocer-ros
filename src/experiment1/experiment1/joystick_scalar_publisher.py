#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


class JoystickScalarPublisherNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("joystick_scalar_state") # MODIFY NAME


def main(args=None):
    rclpy.init(args=args)
    node = JoystickScalarPublisherNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
