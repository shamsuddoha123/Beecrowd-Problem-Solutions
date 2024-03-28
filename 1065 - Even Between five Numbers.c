#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=1;i<=5;i++)
    {
        int a;
        scanf("%d", &a);
        if(a%2==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n", count);
    return 0;
}