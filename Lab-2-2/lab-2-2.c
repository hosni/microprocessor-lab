#include <io.h>
#include <delay.h>

#define ZERO   0b11111100
#define ONE    0b01100000
#define TWO    0b11011010
#define THREE  0b11110010
#define FOUR   0b01100110
#define FIVE   0b10110110
#define SIX    0b10111110
#define SEVEN  0b11100000
#define EIGHT  0b11111110
#define NINE   0b11110110

void main(void)
{
    unsigned char numbers [10] = {
        ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE
    }; 
    DDRD = 0b11111111;
    while (1)
    {
        int x;           
        for (x = 9; x > 0; x--)
        {
            PORTD = numbers[x];
            delay_ms(1000);   
        }
    }
}
