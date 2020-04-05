#include <stdio.h>

int main(void)
{
    int c, blanks, tabs, new_lines;

    blanks = tabs = new_lines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blanks;
        }
        if (c == '\t')
        {
            ++tabs;
        }
        if (c == '\n')
        {
            ++new_lines;
        }
    }

    printf("The number of blanks was %d, the number of tabs was %d, and the number of new lines was %d\n", blanks, tabs, new_lines);

    return 0;
}