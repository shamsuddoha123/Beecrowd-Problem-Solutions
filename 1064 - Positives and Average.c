#include<stdio.h>
int main()
{
    double a,sum=0;
    int i,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf", &a);
        if(a>0)
        {
            sum=sum+a;
            count=count+1;//we can also write count++
        }
    }
    float average=sum/count;
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", average);
    return 0;
}
