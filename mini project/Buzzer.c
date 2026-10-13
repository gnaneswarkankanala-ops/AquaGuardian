#include <LPC214x.h>
#include "types.h"
#include "delay.h"
#include "buzzer.h"

void InitBuzzer(void)
{
    IODIR1 |= (1 << BUZZER);
    BuzzerOFF();
}

void BuzzerON(void)
{
    IOSET1 = (1<<BUZZER);
}

void BuzzerOFF(void)
{
    IOCLR1 = (1<<BUZZER);
}

void Beep(u32 ms)
{
    BuzzerON();
    delay_ms(ms);
		BuzzerOFF();
}
/*void BuzzerTone(u32 ms)
{
    u32 i;

    for(i = 0; i < (ms / 2); i++)
    {
        BuzzerON();
        delay_us(1000);

        BuzzerOFF();
        delay_us(1000);
    }
}*/
