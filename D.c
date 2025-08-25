#include <stdio.h>

int main(){

    float a = 0;
    float b = 0;
    float c = 0;
    float Discirminant = 0;
    printf("Enter value a: ");
    scanf("%f", &a);
    printf("Enter value b: ");
    scanf("%f", &b);
    printf("Enter value c: ");
    scanf("%f", &c);
    Discirminant = (b*b) - (4*a*c);
    printf("Discriminant is: %f\n", Discirminant);


    return 0;


}