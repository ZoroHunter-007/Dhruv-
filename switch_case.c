#include<stdio.h>

int main()
{
    int a = 20, b =0;
    char ch;

    printf("Enter your choice (+, -, *, /):\n");
    scanf(" %c", &ch); // Added a space before %c to handle newline character

    switch(ch)
    {
        case '+':
            printf("Addition is %d\n", a + b);
            break;

        case '-':
            printf("Subtraction is %d\n", a - b);
            break;

        case '*':
            printf("Multiplication is %d\n", a * b);
            break;

        case '/':
            if (b != 0) // Added check to avoid division by zero
                printf("Division is %d\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}