#include <LPC214x.h>
#include "led.h"
void InitLED(void)
{
    IODIR1 |= (1<<YELLOW_LED) |
              (1<<GREEN_LED)  |
              (1<<RED_LED);
    AllLED_OFF();
}
void YellowLED_ON(void)
{
    IOSET1 = (1<<YELLOW_LED);
}
void YellowLED_OFF(void)
{
    IOCLR1 = (1<<YELLOW_LED);
}

void GreenLED_ON(void)
{
    IOSET1 = (1<<GREEN_LED);
}

void GreenLED_OFF(void)
{
    IOCLR1 = (1<<GREEN_LED);
}

void RedLED_ON(void)
{
    IOSET1 = (1<<RED_LED);
}

void RedLED_OFF(void)
{
    IOCLR1 = (1<<RED_LED);
}
void AllLED_OFF(void)
{
    IOCLR1 = (1<<YELLOW_LED) |
             (1<<GREEN_LED)  |
             (1<<RED_LED);
}
