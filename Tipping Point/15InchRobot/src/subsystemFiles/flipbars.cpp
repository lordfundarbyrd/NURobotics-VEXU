#include "subsystemHeaders/flipbars.hpp"

void setFlipBars(int power) {
    intake = power;
}

void setFlipBarMotors() {
    int flipPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)
                           - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));
    setFlipBars(flipPower);
}
