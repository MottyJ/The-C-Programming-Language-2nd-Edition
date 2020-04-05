#include <stdio.h>

int main(void)
{
    int c, blanks;

    blanks = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (blanks == 0)
            {
                blanks = 1;
                putchar(c);
            }
        }
        else
        {
            blanks = 0;
            putchar(c);
        }
    }
    return 0;
}