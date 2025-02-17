// Your code here...
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;

    // Input the operator and two numbers
    
    scanf("%c", &operator);  // Read operator
    
    scanf("%d %d", &num1, &num2);  // Read two numbers

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


