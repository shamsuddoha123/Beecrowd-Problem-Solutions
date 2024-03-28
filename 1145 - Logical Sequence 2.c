#include<stdio.h>
int main()
{
    int X,Y,j,i;
    scanf("%d %d", &X, &Y);
    for(i=1;i<=Y;i=i+X)
    {
        for(j=i;j<X+i;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    } 
    return 0;
}