#include <stdio.h>

int main()
{
    int a, b;
    char o;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &o);

    if (o == '+')
        printf("Result = %d", a + b);
    else if (o == '-')
        printf("Result = %d", a - b);
    else if (o == '*')
        printf("Result = %d", a * b);
    else if (o == '/')
        printf("Result = %d", a / b);
    else
        printf("Error! Invalid operator.");
    return 0;
}