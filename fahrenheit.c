#include <stdio.h>

int main(){

    float fahrenheit = 0;
    float celsius = 0;
    printf("Enter Celsius temperature: \n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32.0;
    printf("Fahrenheit temperature: %f\n", fahrenheit);

    return 0;
}