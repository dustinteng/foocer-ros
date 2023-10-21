import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
import time

class LEDControlNode(Node):

    def __init__(self):
        super().__init__('led_control_node')
        GPIO.setmode(GPIO.BCM)
        self.led_pin = 17
        GPIO.setup(self.led_pin, GPIO.OUT)

    def turn_on_led(self):
        self.get_logger().info('Turning the LED ON')
        GPIO.output(self.led_pin, GPIO.HIGH)

    def turn_off_led(self):
        self.get_logger().info('Turning the LED OFF')
        GPIO.output(self.led_pin, GPIO.LOW)

def main(args=None):
    rclpy.init(args=args)
    led_control_node = LEDControlNode()

    try:
        while rclpy.ok():
            led_control_node.turn_on_led()
            time.sleep(1)
            led_control_node.turn_off_led()
            time.sleep(1)
    except KeyboardInterrupt:
        pass

    led_control_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
