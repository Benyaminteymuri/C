#include <stdio.h>

int main()
{
    int a1 = 10;
    int a2 = 10;
    int b1, b2;

    b1 = ++a1;
    b2 = a2++;

    printf("a1 = %d, b1 = %d\n\n", a1, b1);
    printf("a2 = %d, b2 = %d\n", a2, b2);

    return 0;
}
