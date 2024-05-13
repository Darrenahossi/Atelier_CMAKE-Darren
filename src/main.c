#include <stdio.h>
#include "calculator.h"

int main() {
    int result = 0;
    result = add(5, 3);
    printf("Addition: %d\n", result);

    result = subtract(10, 7);
    printf("Subtraction: %d\n", result);

    result = multiply(4, 6);
    printf("Multiplication: %d\n", result);

    result = divide(20, 5);
    printf("Division: %d\n", result);

    result = square(5);
    printf("Square: %d\n", result);

    return 0;
}  
