#include <stdio.h>
#define TRUE -1
#define FALSE 0

int main()
{
    int n = 10;
    int a, S, i;

    i = 0;
    S = 0;
    while(TRUE) // Use condition i<n, for limited number of entries
    {
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a==-1) break;

        S+=a;
        i++;
    }

    printf("\nSum of numbers = %d\n\n",S);

    float m = (float)S/i;
    printf("Mean of numbers = %.2f",m);

    return 0;
}
