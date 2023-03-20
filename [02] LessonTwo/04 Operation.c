#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Please enter an integer:\n");   // Prints Prompt
    scanf("%d", &a);

    printf("Please enter another integer:\n");   // Prints Prompt
    scanf("%d", &b);

    c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    d = a * b;
    printf("%d * %d = %d\n", a, b, d);

    printf("%d mod %d = %d\n", a, b, a % b);

    printf("%d mod %d = %d\n", b, a, b % a);

    return 0;
}
