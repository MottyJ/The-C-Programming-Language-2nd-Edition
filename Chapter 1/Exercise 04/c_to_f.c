#include <stdio.h>

int main(void)
{
    char eff, cee;
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    eff = 'F';
    cee = 'C';

    celsius = lower;
    printf("%3c %6c\n", cee, eff);
    while (celsius <= upper) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}