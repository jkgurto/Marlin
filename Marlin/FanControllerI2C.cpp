#include "FanControllerI2C.h"

#if defined(FAN_CONTROLLER_I2C)
#if (ARDUINO >= 100)
    # include "Arduino.h"
#else
    # include "WProgram.h"
#endif

#include "Wire.h"

namespace FanControllerI2C
{

const uint8_t I2C_ADDRESS = 4;

const char REPRAP_COMMAND_PREFIX = 'M';
const char COMMAND_PARAMETER_S_PREFIX = 'S';
const uint8_t FAN_ON_COMMAND = 106;

void setSpeed(int speed)
{
    Wire.begin(); 
    Wire.beginTransmission(I2C_ADDRESS);

    Wire.write(REPRAP_COMMAND_PREFIX);
    Wire.write(FAN_ON_COMMAND);

    Wire.write(COMMAND_PARAMETER_S_PREFIX);
    Wire.write(speed);

    Wire.endTransmission();
}

} // namespace FanControllerI2C
#endif // defined(FAN_CONTROLLER_I2C)
