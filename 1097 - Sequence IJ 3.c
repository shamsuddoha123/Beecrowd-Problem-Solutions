#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i=i+2)
    {
        for(j=6+i;(j-i)>=4;j--)
        {
            printf ("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}