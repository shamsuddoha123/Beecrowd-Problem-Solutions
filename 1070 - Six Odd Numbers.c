#include<stdio.h>
int main()
{
    int data,ending,i;
    scanf("%d", &data);
    ending=data+11;
    for(i=data;i<=ending;i++)
    {
        if(i%2==1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}