#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[]="Hello World!";
    char s2[40];
    char s3[40];

    printf("Using strcpy:\n");
    strcpy(s2,s1);
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
    printf("\n");

    printf("Using strncpy:\n");
    strncpy(s3,s1,5);
    s3[5]='\0';
    printf("s1 = %s\n",s1);
    printf("s3 = %s\n",s3);
    printf("\n");

    char s4[]="World!";
    char s5[50];
    strcpy(s5,"Hello ");
    s5[6]='\0';
    printf("Before strcat:\n");
    printf("s4 = %s\n",s4);
    printf("s5 = %s\n",s5);
    strcat(s5,s4);
    printf("After strcat:\n");
    printf("s4 = %s\n",s4);
    printf("s5 = %s\n",s5);

    return 0;
}
