#include <io.h>

void set_color(int r, int g, int b)
{
    PORTD.0 = r;
    PORTD.1 = g;
    PORTD.2 = b;
}

void main(void)
{
    DDRD = 0b11111111;
    while (1)
    {
        set_color(0, 0, 0);
    }
}
