#include <io.h>
#include <delay.h>

void main(void)
{
    DDRA = 0b00000111;
    while (1)
    {
        // Red light
        PORTA.0 = 1;
        PORTA.1 = 0;
        PORTA.2 = 0;
        delay_ms(6000);

        // yellow light
        PORTA.0 = 0;
        PORTA.1 = 1;
        PORTA.2 = 0;
        delay_ms(2000);
        
        // green light 
        PORTA.0 = 0;
        PORTA.1 = 0;
        PORTA.2 = 1;
        delay_ms(4000);
    }
}
