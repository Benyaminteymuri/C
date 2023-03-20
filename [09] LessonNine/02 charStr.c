#include <stdio.h>
#include <stdlib.h>
#define LENGTH 50

int main()
{
    char str[LENGTH];

    printf("Enter a line of text:\n");

    char c;
    int i = 0;

    while((c=getchar())!='\n')
    {
        str[i++]=c;
        if(i>=LENGTH-1) break;
    }
    str[i]='\0';

    printf("\nEntered line of text:\n");
    puts(str);
    printf("\n");

    return 0;
}
