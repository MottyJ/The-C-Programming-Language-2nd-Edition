#include <stdio.h>

#define MAX_CHARS 128

int main(void)
{
    int c, i, j;
    int character[MAX_CHARS];

    for (i = 0; i < MAX_CHARS; ++i)
    {
        character[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        ++character[c];
    }

    printf("Character | Amount\n");

    for (i = 0; i < MAX_CHARS; ++i)
    {
        printf("%10c", i);
        printf(" | ");
        for (j = 0; j < character[i]; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}