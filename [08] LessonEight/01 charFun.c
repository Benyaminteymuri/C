#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    while((ch=getchar()) != EOF)
    {
        if(ch==10) continue;

        printf("ASCII code of %c is %d.\n",ch,ch);

        /*
        if(isdigit(ch))
            printf("%c is a digit.\n",ch);
        else
            printf("%c is not a digit.\n",ch);
        */

        //isdigit(ch)?printf("%c is a digit.\n",ch):printf("%c is not a digit.\n",ch);

        printf(isdigit(ch) ? "%c is a digit.\n" : "%c is not a digit.\n",ch);
        printf(isalpha(ch) ? "%c is a letter.\n" : "%c is not a letter.\n",ch);
        if(isalpha(ch)) printf(islower(ch) ? "%c is lowercase.\n" : "%c is uppercase.\n",ch);
        printf(ispunct(ch) ? "%c is a punctuation.\n" : "%c is not a punctuation.\n",ch);
        printf(isspace(ch) ? "%c is a spacing character.\n" : "%c is not a spacing character.\n",ch);

        printf("\n");
    }

    return 0;
}
