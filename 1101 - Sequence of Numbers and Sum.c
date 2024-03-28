#include<stdio.h>
int main()
{
    int x,y,i,temp,sum=0;
    while(1)
    {
        scanf("%d%d", &x, &y);
        if(x<=0 || y<=0)
        {
            break;
        }
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        for(i=x;i<=y;i++)
        {
            printf("%d ", i);
            sum+=i;
        }
        printf("Sum=%d\n", sum);
        sum=0;
    }
    return 0;
}