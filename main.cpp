#include "mbed.h"
#include "LSM6DSLSensor.h"


/*Write a program to control the LED brightness using the 3 axis accelerometer. 
Moving the board in x-axis changes the brightness on LED1,
y-axis changes the brightness on LED2 and 
z-axis changes the brightness on LED3.
Paste the code in the block below or submit a git repository/github gist link to the solution. (please make sure its saved as a public repository).
*/

#define PI 3.141592654

static DevI2C devI2c(PB_11,PB_10);
static LSM6DSLSensor acc_gyro(&devI2c,0xD4,D4,D5); // high address


float computeAngle(int x, int y, int z){
    float res = 0;

    return res;
}

int main() {
    uint8_t id;
    int32_t axes[3];
    float res=0;
    acc_gyro.init(NULL);

    acc_gyro.enable_x();
    acc_gyro.enable_g();



    while(1) {

    }
}
