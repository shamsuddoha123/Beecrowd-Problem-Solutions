#include<stdio.h>
int main()
{
    int amount,n,i,sum=0,sumC=0,sumR=0,sumS=0;
    char ch,b;
    double percentageC,percentageR,percentageS;
    b='%';
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c", &amount, &ch);
        if(ch=='C')
        {
            sumC+=amount;
        }
        else if(ch=='R')
        {
            sumR+=amount;
        }
        else if(ch=='S')
        {
            sumS+=amount;
        }
    }
    sum=sumC+sumR+sumS;
    percentageC=(sumC*100.0)/sum;
    percentageR=(sumR*100.0)/sum;
    percentageS=(sumS*100.0)/sum;
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", sumC);
    printf("Total de ratos: %d\n", sumR);
    printf("Total de sapos: %d\n", sumS);
    printf("Percentual de coelhos: %.2lf %c\n", percentageC, b);
    printf("Percentual de ratos: %.2lf %c\n", percentageR, b);
    printf("Percentual de sapos: %.2lf %c\n", percentageS, b);
    return 0;
}