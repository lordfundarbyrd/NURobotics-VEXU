#include "subsystemHeaders/flipbars.hpp"

void setClaw(int power) {
    intake = power;
}

void setIntakeMotors() {
    int clawPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)
                           - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));
    setClaw(clawPower);
}
