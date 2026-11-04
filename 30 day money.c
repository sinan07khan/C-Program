// 30 days money comparison program

#include <stdio.h>

int main() 
{
    int p1 = 0;
    int p2 = 0;
    int taka = 1;

    for (int i = 1; i <= 30; i++) 
    {
        p1 = p1 + 100000;
        p2 = p2 + taka;
        taka = taka * 2;
    }

    printf("Person 1 dilo: %d taka\n", p1);
    printf("Person 2 dilo: %d taka\n", p2);

    if (p1 > p2) 
    
        printf("Person 2 will be in benefit\n");
    
    else if (p1 < p2) 
    
        printf("Person 1 will be in benefit\n");
    
    else 
    
        printf("Both persons have the same amount of money\n");
    
    return 0;
}