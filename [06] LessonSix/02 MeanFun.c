#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k;
    int p[]={1,2,3,4,5,6,7,8,9,0,
             1,4,7,2,8,6,0,2,4,3,
             8,9,7,6,8,0,3,4,2,5,
             6,7,3,7,8,9,2,3,6,8,
             4,4,6,7,8,4,9,2,3,4,
             5,6,7,8,8,3,4,7,8,9};

    int N = sizeof(p)/sizeof(p[0]);

    int f[10];
    for(i=0; i<10; i++)
    {
        f[i]=0;
    }

    int sum = 0;
    float mean;
    for(j=0; j<N; j++)
    {
        f[p[j]]++;
        sum += p[j];
    }
    mean = (float)sum / N;

    float stdev = 0;
    for(j=0; j<N; j++)
    {
        stdev += (p[j]-mean)*(p[j]-mean);
    }
    stdev = sqrt(stdev/(N-1));

    printf("Sum   = %d\n",sum);
    printf("Mean  = %f\n",mean);
    printf("StDev = %f\n",stdev);
    printf("\n");

    printf("Poll\tFreq.\tHistogram\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t%d\t",i,f[i]);
        for(k=0; k<f[i]; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
