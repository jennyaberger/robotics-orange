#include <basic_movements.cpp>
#include <signal.h>

void stopMotors(int signal)
{
    BasicMovements basic_movements;
    basic_movements.stop();
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "example_turn");

    signal(SIGINT, stopMotors);

    BasicMovements basic_movements;
    // ROS_INFO("Success 1 %s", basic_movements.turnLeft() ? "true" : "false");

    ROS_INFO("Success 2 %s", basic_movements.turnRight() ? "true" : "false");

    // ROS_INFO("Success 3 %s", basic_movements.turnLeft() ? "true" : "false");
    basic_movements.stop();

    return 0;
}

