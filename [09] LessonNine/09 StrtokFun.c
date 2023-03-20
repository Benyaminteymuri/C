#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[]="1.2 2.5 -5.6,7,8,10 1.41 -6.5,-17";
    char del[]=" ,";

    char *pt;
    pt=strtok(str,del);
    while(pt!=NULL)
    {
        printf("%s\n",pt);
        pt=strtok(NULL,del);
    }

    return 0;
}
