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

    fahr = lower;
    printf("%3c %6c\n", eff, cee);
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}