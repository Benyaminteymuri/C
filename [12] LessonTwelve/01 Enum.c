#include <stdio.h>
#include <stdlib.h>

typedef enum months {FAR=1,ORD,KHR,TIR,MOR,SHR,MHR,ABN,AZR,DAY,BAH,ESF} Month;

int main()
{
    Month m;

    char *MonthNames[]={"",
        "Farvardin","Ordibehesht","Khordad",
        "Tir","Mordad","Shahrivar",
        "Mehr","Aban","Azar",
        "Day","Bahman","Esfand"
    };

    for(m=FAR; m<=ESF; m++)
    {
        printf("%3d %s\n",m,MonthNames[m]);
    }

    return 0;
}
