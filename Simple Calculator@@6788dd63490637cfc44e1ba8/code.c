// Your code here...
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Input the operator and two numbers
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);  // Read operator
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);  // Read two numbers

    // Perform operation based on operator
    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
