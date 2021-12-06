#include "subsystemHeaders/drive.hpp"
#include "main.h"

void setDrive(int left, int right) {
    driveLeftBackBack = left;
    driveLeftFront = left;
    driveLeftBackFront = left;
    driveRightBackBack = right;
    driveRightBackFront = right;
    driveRightFront = right;
}

void setDriveMotors() {
    int left = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int right = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    setDrive(left, right);
}
