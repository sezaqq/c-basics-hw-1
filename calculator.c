#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    int result = 0;
    char op;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);    
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {

        result = a + b;
        printf("Result: %d\n", result);
    } 
    else if (op == '-') {

        result = a - b;
        printf("Result: %d\n", result);
    } 
    else if (op == '*') {

        result = a * b;
        printf("Result: %d\n", result);
    } 
    else if (op == '/') {

        if (b != 0) {

            result = a / b;
            printf("Result: %d\n", result);
        } 
        else {
            printf("Error: division by zero\n");
            return 0;
        }
    } 
    else {
        printf("Error: unknown operation\n");
        return 0;
    }
    

    return 0;
}    