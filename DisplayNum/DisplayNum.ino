
#include "TM1637.h"

// Pins definitions for TM1637 and can be changed to other ports
const int CLK = 6;
const int DIO = 7;
TM1637 tm1637(CLK, DIO);
void setup() {
    tm1637.init();
    tm1637.set(BRIGHT_TYPICAL);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;

    float num = 2009;

    // Without specifying decimal pointt it displays int
    tm1637.displayNum(num);    // -123
    delay(2000);
}

void loop() {
    tm1637.displayStr("SUDENAZ GUNES");
    delay(5000);
    for (int i=10;i>0;i=i-1) {
        tm1637.displayNum(i);
        delay(1000);
    }
    tm1637.displayStr("1461");
    delay(5000);
}
