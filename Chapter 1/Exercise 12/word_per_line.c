#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c, word;

    word = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (word == IN)
            {
                putchar('\n');
                word = OUT;
            }
        }
        else
        {
            putchar(c);
            word = IN;
        }
    }
    return 0;
}