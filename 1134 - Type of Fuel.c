#include<stdio.h>
int main()
{
    int n,a=0,g=0,d=0;
    printf("MUITO OBRIGADO\n");
    while(1)
    {
        scanf("%d", &n);
        if(n>0 && n<4)
        {
            if(n==1)a++;
            else if(n==2)g++;
            else if(n==3)d++;
        }
        else if(n==4)
        {
            break;
        }
    }
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);
    return 0;
}