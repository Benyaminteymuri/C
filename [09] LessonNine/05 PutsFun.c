#include <stdio.h>
#include <stdlib.h>
#define TRUE 1

int main()
{
    int e;

    while(TRUE)
    {
        printf("Please enter an error code: ");
        scanf("%d",&e);
        printf("\n");

        if(e<0) break;

        printf("Error message for Error Code #%d:\n",e);
        puts(strerror(e));
        printf("\n");
    }

    return 0;
}
