#include <stdio.h>

int main()
{
    int a;

    printf("Enter an integer:\n");
    scanf("%d",&a);

    if(a % 2 == 0)
    {
        printf("%d is Even.\n",a);
    }
    else
    {
        printf("%d is Odd.\n",a);
    }

    if(a > 0)
    {
        printf("%d is Positive.\n");
    }
    else if(a < 0)
    {
        printf("%d is Negative.\n");
    }
    else
    {
        printf("%d is Zero.\n");
    }

    return 0;
}
