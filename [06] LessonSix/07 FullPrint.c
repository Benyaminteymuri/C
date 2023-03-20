#include <stdio.h>

void PrintArray(const int a[], int N);
int GetDivisors(int n, int D[]);

int main()
{
    int n;
    int i;

    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("\n");

    int nd=GetDivisors(n,NULL);
    printf("%d has %d divisors.\n", n, nd);

    int D[nd];
    for(i=0; i<nd; i++)
    {
        D[i]=0;
    }

    GetDivisors(n,D);

    printf("Divisors of %d = {",n);
    PrintArray(D,nd);
    printf("}\n");

    return 0;
}

int GetDivisors(int n, int D[])
{
    if(n==0) return 0;

    if(n<0) n=-n;

    int j = 0;
    int i;
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            if(D!=NULL) D[j]=i;
            j++;
        }
    }

    return j;
}

void PrintArray(const int a[], int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("%d",a[i]);
        if(i<N-1)
        {
            printf(", ");
        }
    }
}

