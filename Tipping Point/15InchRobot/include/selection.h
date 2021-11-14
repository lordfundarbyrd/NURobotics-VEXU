#pragma once

#include <string>

//selector configuration
#define HUE 360 // color of theme from 0-360
#define DEFAULT 1 // default auton
#define AUTONS "Front", "Back", "Do Nothing" // names of the autonomous programs

namespace selector{

extern int auton;
const char *b[] = {AUTONS, ""};
void init(int hue = HUE, int default_auton = DEFAULT, const char **autons = b);

/**
HUE - Controls the color of the theme.
AUTONS - A list of every autonomous option. This list can be made any length, but may format weirdly.
DEFAULT - The auton will be selected on startup. This is required for starting a programming skills run from the controller.
*/

}
