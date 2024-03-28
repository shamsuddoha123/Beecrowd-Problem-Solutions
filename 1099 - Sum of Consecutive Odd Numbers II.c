#include<stdio.h>
int main()
{
    int n,x,y,i,sum,temp;
    scanf("%d", &n);
    while(1)
    {
        if(n==0)
        {
            break;
        }
        scanf("%d%d", &x, &y);
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        sum=0;
        for(i=x+1;i<y;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n", sum);
        n--;
    }
    return 0;
}