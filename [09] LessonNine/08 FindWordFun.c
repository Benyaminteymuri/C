#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FindCharacter(const char *str, char c);
void FindWord(const char *str, const char *w);

int main()
{
    char str[]="To be, or not to be. That's the question.";

    FindCharacter(str,'b');
    //FindCharacter(str,'e');
    //FindCharacter(str,'a');
    //FindCharacter(str,'w');

    FindWord(str,"not");
    FindWord(str,"This");

    return 0;
}

void FindCharacter(const char *str, char c)
{
    printf("Finding all occurrences of character \'%c\' in the following string:\n",c);
    puts(str);
    printf("\n");

    char *pc;
    int i, n;

    n=0;
    pc=strchr(str,c);

    while(pc!=NULL)
    {
        i = pc - str + 1;
        printf("Found %c at position %d\n",c,i);
        n++;

        pc=strchr(pc+1,c);
    }
    printf("\n");

    if(n>0)
    {
        printf("%d occurrences of character \'%c\' found.",n,c);
    }
    else
    {
        printf("Nothing found.");
    }
    printf("\n---------------------------------------\n");

}

void FindWord(const char *str, const char *w)
{
    printf("Finding first occurrence of word \'%s\' in the following sentence:\n",w);
    puts(str);
    printf("\n");

    char *pw=strstr(str,w);
    if(pw==NULL)
    {
        printf("Nothing found.\n");
    }
    else
    {
        int i=pw-str+1;
        printf("Found at index %d.\n",i);
    }
    printf("\n---------------------------------------\n");
}
