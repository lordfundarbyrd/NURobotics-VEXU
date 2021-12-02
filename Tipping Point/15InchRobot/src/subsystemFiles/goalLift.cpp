#include "subsystemHeaders/goalLift.hpp"

void setGoalLift(int power) {
    goalLift = power;
}

void setGoalLiftMotors() {
    int power = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)
            - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
    setGoalLift(power);
}