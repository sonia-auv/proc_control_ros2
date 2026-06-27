import os
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    auv = os.getenv("AUV", "")
    
    if auv == "":
        raise Exception("env var AUV not set")

    config = os.path.join(
        get_package_share_directory("proc_control"), "config", f"{auv}_config.yaml"
    )
    print(config)
    if not os.path.exists(config):
        raise FileNotFoundError("Config File not found")
    return LaunchDescription(
        [
            Node(
                package="proc_control",
                executable="proc_control",
                parameters=[config]
            )
        ]
    )