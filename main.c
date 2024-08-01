#include "header.h"
void setup(){
  I2C_start();
  I2C_send((DEVICE_ADDRESS<<1));
  LCD_command();
  command(0x83);
  I2C_write("welcome");
  command(0xc0);
  I2C_write("to ECEN Academy");
  I2C_stop();
}
void loop(){

}
