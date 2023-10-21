#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from simple_interfaces.msg import ButtonState

class ButtonListener(Node):
    def __init__(self):
        super().__init__("button_listener") 
        self.get_logger().info("button_listener publisher node has started")
        self.button_state_subscriber_= self.create_subscription(ButtonState, "button_state",self.button_callback, 10)


    def button_callback(self, msg):
        self.get_logger().info(f'Received button manual: name={msg.name}, level={msg.level}')



def main(args=None):
    rclpy.init(args=args)
    node = ButtonListener()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
