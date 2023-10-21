from setuptools import find_packages, setup

package_name = 'experiment1'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='teng',
    maintainer_email='teng@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'], 
    entry_points={
        'console_scripts': [
            "run_node = experiment1.run_node:main",
            "hw_status_publisher = experiment1.hw_status_publisher:main",
            "led_panel = experiment1.led_panel:main",
            "battery = experiment1.battery:main",
            "joystick_publisher = experiment1.joystick_publisher:main",
            "joystick_listener = experiment1.joystick_listener:main",
            "joystick_listener2 = experiment1.joystick_listener2:main",
            "button_listener = experiment1.button_listener:main",
            "led_control_node = experiment1.led_control_node:main",
            "joystick_panel = experiment1.joystick_panel:main",


        ],
    },
)
