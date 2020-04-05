#include <stdio.h>

int main(void)
{
    int c;

    c = getchar() != EOF;
    printf("EOF is %d\n", c);
    
    return 0;
}