#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from simple_interfaces.srv import SetJoystickScalar
from simple_interfaces.msg import JoystickScalarValue

class JoystickPanelNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("joystick_panel") # MODIFY NAME
        self.get_logger().info("joystick_panel node has started")
        # self.joystick_name_ = "iloveu"
        self.joystick_magnitude_ = 1.11
        self.joystick_magnitude_publisher_= self.create_publisher(JoystickScalarValue, "set_joystick_scalar", 10)
        self.joystick_magnitude_timer_ = self.create_timer(1, self.publish_joystick_scalar_value)
        self.set_joystick_magnitude_= self.create_service(SetJoystickScalar,"set_joystick_scalar",self.callback_set_joystick_scalar_panel)
        self.get_logger().info("joystick_panel node has started end")

    def publish_joystick_scalar_value(self):
        msg = JoystickScalarValue()
        # self.get_logger().info("joystick_name: " + str(msg.joystick_name))
        msg.magnitude = self.joystick_magnitude_
        self.get_logger().info("msg.magnitude: " + str(msg.magnitude))


        # self.get_logger().info(msg.joystick_name)
        # self.get_logger().info(msg.magnitude)
        self.joystick_magnitude_publisher_.publish(msg)
        




    def callback_set_joystick_scalar_panel(self, request, response):
        # joystick_name = request.joystick_name
        self.joystick_magnitude_ = request.magnitude
        # check the params we get using conditions or validate
        #if the number is bigger than the length of the array or less or eq to 0
        response.success = True
        self.publish_joystick_scalar_value()
        return response

        
def main(args=None):
    rclpy.init(args=args)
    node = JoystickPanelNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
