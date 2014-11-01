#ifndef FAN_CONTROLLER_I2C_H
#define FAN_CONTROLLER_I2C_H

// Enable/disable here
#define FAN_CONTROLLER_I2C

#if defined(FAN_CONTROLLER_I2C)
namespace FanControllerI2C
{
void setSpeed(int speed);
} // FanControllerI2C
#endif // defined(FAN_CONTROLLER_I2C)

#endif // FAN_CONTROLLER_I2C_H
