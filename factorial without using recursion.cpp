#include <stdio.h>
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    int result = factorial(number);
    printf("Factorial of %d is: %d\n", number, result);
    return 0;
}
