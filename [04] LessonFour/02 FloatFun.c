#include <stdio.h>
#include <math.h>

int main()
{
    float a, d, p;
    int n;

    // Get a
    printf("Enter first element of series (a): ");
    scanf("%f",&a);
    printf("\n");

    // Get d
    printf("Enter step size of series (d): ");
    scanf("%f",&d);
    printf("\n");

    // Get n
    printf("Enter number of elements (n): ");
    scanf("%d",&n);
    printf("\n");

    // Get p
    printf("Enter exponent power (p): ");
    scanf("%f",&p);
    printf("\n");

    float S=0;
    float ai;

    float T=0;
    float bi;

    printf("i\ta(i)\t\tS(i)\t\tb(i)\t\tT(i)\n");

    for(int i = 0; i < n; i++)
    {
        ai = a + i * d;     // calculate the i-th element
        S += ai;

        bi = pow(ai,p);
        T += bi;

        printf("%d\t%f\t%f\t%f\t%f\n", i, ai, S, bi, T);
    }

    printf("\n\nFinal Sum of Series (S) = %f\n",S);
    printf("\n\nFinal Sum of Series Squares (T) = %f\n",T);

    return 0;
}
