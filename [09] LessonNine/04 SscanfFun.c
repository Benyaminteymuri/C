#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="(x = -5.45, y = 10.67)";

    printf("Input string is:\n");
    puts(str);
    printf("\n\n");

    float x, y;
    sscanf(str, "(x = %f, y = %f)",&x,&y);
    printf("Results of sscanf:\n");
    printf("x = %.2f\n",x);
    printf("y = %.2f\n",y);

    return 0;
}
