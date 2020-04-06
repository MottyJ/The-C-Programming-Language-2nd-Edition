#include <stdio.h>

float temp_convert(int fahr);

int main(void) {
    float i;
    
    for (i = 0.0; i < 300.0; i += 20.0) {
        printf("%3.0f %6.1f\n", i, temp_convert(i));
    }
    return 0;
}

float temp_convert(int fahr)
{
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}