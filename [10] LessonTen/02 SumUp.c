#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,m,d;

    printf("Please enter the date as YYYY-MM-DD: ");
    //scanf("%4d-%2d-%2d",&y,&m,&d);
    scanf("%d%*c%d%*c%d",&y,&m,&d);
    printf("\n");

    printf("Result:\n");
    printf(" Year: %d\n",y);
    printf("Month: %d\n",m);
    printf("  Day: %d\n",d);

    return 0;
}
