#include <stdio.h>

void GetDivisors(int n, int A[]);

int main()
{
    int N;
    printf("Please enter the array size (N): ");
    scanf("%d",&N);
    printf("\n");

    int a[2*N];
    int L = sizeof(a)/sizeof(a[0]);
    printf("Size of array is: %d\n",L);

    return 0;
}
