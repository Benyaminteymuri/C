#include <stdio.h>

void PrintArray(const int *const a, int N);
void BubbleSort(int *const a, int N);
void Swap(int *p1, int *p2);

int main()
{
    int a[]={23,53,12,10,17,56,78,34,29,37,45,12,19,20,40,90,43,48,62};

    int N=sizeof(a)/sizeof(a[0]);

    printf("Array before sorting:\n");
    PrintArray(a,N);
    printf("\n\n");

    BubbleSort(a,N);

    printf("Array after sorting:\n");
    PrintArray(a,N);
    printf("\n\n");

    return 0;
}

void BubbleSort(int *const a, int N)
{
    int i, j;
    int swapped;

    for(i=0; i<N; i++)
    {
        swapped = 0;
        for(j=0; j<N-1; j++)
        {
            if(a[j]>a[j+1])
            {
                Swap(&a[j], &a[j+1]);
                swapped = 1;
            }
        }
        if(!swapped) break;
    }
}

void Swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void PrintArray(const int *const a, int N)
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
