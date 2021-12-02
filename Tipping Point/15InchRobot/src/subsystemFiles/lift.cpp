#include "subsystemHeaders/lift.hpp"

void setLift(int power) {
    leftLift = power;
    rightLift = power;
}

void setLiftMotors() {
    int power = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)
                           - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));
    setLift(power);
}
