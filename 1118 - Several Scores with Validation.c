#include<stdio.h>
int main()
{
    int X,i,j,k;
    float n,avg,arr[2];
    while(1)
    {
        j=0;
        for(i=0;i<100;i++)
        {
            scanf("%f", &n);
            if(n>=0 && n<=10)
            {
                arr[j]=n;
                j++;
            }
            else 
            {
                printf("nota invalida\n");
            }
            if(j==2)
            {
                avg=(arr[0]+arr[1])/2;
                printf("media = %.2f\n", avg);
                break;
            }
        }
        for(k=0;k<100;k++)
        {
            scanf("%d", &X);
            printf("novo calculo (1-sim 2-nao)\n");
            if(X==1 || X==2)
            {
                break;
            }    
        }
        if(X==1)
        {
            continue;
        }
        else if(X==2)
        {
            break;
        }    
    }
    return 0;
}