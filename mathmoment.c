#include <stdio.h>
#include <math.h>

int main(){

    float a = 3;
    float b = 4.5;
    float c = 16;
    float d = 2.7;
    float e = 5;
    float f = 25.2;
    float g = 2.4;
    float h = 6;
    float y = 0;
    
    y = (log(sqrt(a*a + b*b))+sqrt(c*d))/(e*sqrt(f)) - log(g+h);
    printf("Result: %f\n", y);

    return 0;

}