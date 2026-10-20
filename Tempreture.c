// Program to convert temperature between Celsius, Fahrenheit, and Kelvin
#include <stdio.h>

int main() {
    float c, f, k;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("Enter Celsius: ");
        scanf("%f", &c);

        f = (c * 9 / 5) + 32;

        printf("Fahrenheit = %.2f\n", f);
    }

    else if (choice == 2) 
    {
        printf("Enter Fahrenheit: ");
        scanf("%f", &f);

        c = (f - 32) * 5 / 9;

        printf("Celsius = %.2f\n", c);
    }
    
    else if (choice == 3) 
    {
        printf("Enter Celsius: ");
        scanf("%f", &c);

        k = c + 273.15;

        printf("Kelvin = %.2f\n", k);
    }

    else if (choice == 4) 
    {
        printf("Enter Kelvin: ");
        scanf("%f", &k);

        c = k - 273.15;

        printf("Celsius = %.2f\n", c);
    }

    else if (choice == 5) 
    {
        printf("Enter Fahrenheit: ");
        scanf("%f", &f);

        k = (f - 32) * 5 / 9 + 273.15;

        printf("Kelvin = %.2f\n", k);
    }

    else if (choice == 6) 
    {
        printf("Enter Kelvin: ");
        scanf("%f", &k);

        f = (k - 273.15) * 9 / 5 + 32;

        printf("Fahrenheit = %.2f\n", f);
    }
    else 
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
