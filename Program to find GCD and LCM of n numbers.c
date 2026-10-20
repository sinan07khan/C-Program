// Program to find GCD and LCM of n numbers
#include <stdio.h>

int main()
{
    int n, i, j, gcd, lcm;
    int a[100];

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    gcd = a[0];
    lcm = a[0];

    for (i = 1; i < n; i++)
    {
        // Find GCD
        int x = gcd, y = a[i];

        while (y != 0)
        {
            j = x % y;
            x = y;
            y = j;
        }
        gcd = x;

        // Find LCM
        lcm = (lcm * a[i]) / gcd;
    }

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}