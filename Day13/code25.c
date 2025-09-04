//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() 
{
    int a, b, result;
    char op;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Input operator
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to ignore newline

    switch(op)
     {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %d\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if (b != 0)
             {
                result = a % b;
                printf("Result = %d\n", result);
            } else 
            {
                printf("Error: Modulus by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}