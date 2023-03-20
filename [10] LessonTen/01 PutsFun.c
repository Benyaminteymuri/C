#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];

    printf("Enter the string: ");
    scanf("%[^aeiou]",str);
    printf("\n");

    printf("Result:\n");
    puts(str);
    printf("\n");

    return 0;
}
