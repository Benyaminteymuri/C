#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[]="1.2 -3.5 10.8";
    char *pEnd;

    double x=strtof(s,&pEnd);
    double y=strtof(pEnd,&pEnd);
    double z=strtof(pEnd,NULL);

    printf("x = %f\n",x);
    printf("y = %f\n",y);
    printf("z = %f\n",z);

    return 0;
}
