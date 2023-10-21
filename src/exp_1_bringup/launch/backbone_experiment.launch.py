from launch import LaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    ld = LaunchDescription()
    # remap_topic = {
    #     "prev_topic_name", "desired_topic_name" 
    # }
    button_listener_node = Node(
        package = "experiment1",
        executable= "button_listener",
        # name="change_node_name",
        # remappings=[
        #     remap_topic
        # ],
        # parameters=[
        #     {"param1": 666},
        #     {"param2": 999}
        #     ]
    )

    # rosbridge_websocket_node = Node(
    #     PythonLaunchDescriptionSource(/home/teng/ros2_ws/src/exp_1_bringup/launch/start_rosbridge.launch.py)
    # )

    ld.add_action(button_listener_node)
    # ld.add_action(rosbridge_websocket_node)

    return ld