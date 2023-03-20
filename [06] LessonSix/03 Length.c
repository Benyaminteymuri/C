#include <stdio.h>

int main()
{
    printf("Please enter your name:\n");

    char name[10];
    scanf("%9s",name);

    printf("\nYour name is: %s.\n",name);

    int N = sizeof(name)/sizeof(name[0]);
    printf("Length of array = %d\n", N);

    int M = 0;
    int i;
    for(i = 0; i<N; i++)
    {
        if(name[i]=='\0') break;
        M++;
    }
    printf("Length of string = %d\n", M);

    return 0;
}
