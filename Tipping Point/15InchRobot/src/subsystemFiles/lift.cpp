#include "main.h"

void setLift(int power) {
    liftLeft = power;
    liftRight = power;
}

void setLiftMotors() {
    int liftPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)
                             - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));
    setLift(liftPower);
}
