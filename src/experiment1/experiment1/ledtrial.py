import RPi.GPIO as GPIO
import time

# Set the GPIO mode to BCM
GPIO.setmode(GPIO.BCM)

# Define the GPIO pin number
led_pin = 17

# Set the GPIO pin as an output
GPIO.setup(led_pin, GPIO.OUT)

try:
    while True:
        # Turn the LED on
        GPIO.output(led_pin, GPIO.HIGH)
        print("LED is ON")
        time.sleep(1)  # Keep the LED on for 1 second

        # Turn the LED off
        GPIO.output(led_pin, GPIO.LOW)
        print("LED is OFF")
        time.sleep(1)  # Keep the LED off for 1 second

except KeyboardInterrupt:
    # Clean up when the script is interrupted (e.g., Ctrl+C)
    GPIO.cleanup()
