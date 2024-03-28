#include <stdio.h>
int main()
{
    double N;
    scanf("%lf", &N);
    int n=N*100;
    printf("NOTAS:\n");
    //100 R$
    int taka100=n/10000;
    printf("%d nota(s) de R$ 100.00\n", taka100);
    //50 R$
    int taka50=(n%10000)/5000;
    printf("%d nota(s) de R$ 50.00\n", taka50);
    //20 R$
    int taka20=((n%10000)%5000)/2000;
    printf("%d nota(s) de R$ 20.00\n", taka20);
    //10 R$
    int taka10=(((n%10000)%5000)%2000)/1000;
    printf("%d nota(s) de R$ 10.00\n", taka10);
    //5 R$
    int taka5=((((n%10000)%5000)%2000)%1000)/500;
    printf("%d nota(s) de R$ 5.00\n", taka5);
    //2 R$
    int taka2=(((((n%10000)%5000)%2000)%1000)%500)/200;
    printf("%d nota(s) de R$ 2.00\n", taka2);
    printf("MOEDAS:\n");
    //1 R$
    int coin1=((((((n%10000)%5000)%2000)%1000)%500)%200)/100;
    printf("%d moeda(s) de R$ 1.00\n", coin1);
    //0.50 RS
    int coin50=(((((((n%10000)%5000)%2000)%1000)%500)%200)%100)/50 ;
    printf("%d moeda(s) de R$ 0.50\n", coin50);
    //0.25 R$
    int coin25=((((((((n%10000)%5000)%2000)%1000)%500)%200)%100)%50)/25;
    printf("%d moeda(s) de R$ 0.25\n", coin25);
    //0.10 R$
    int coin10=(((((((((n%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)/10;
    printf("%d moeda(s) de R$ 0.10\n", coin10);
    //0.05 R$
    int coin05=((((((((((n%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)%10)/5;
    printf("%d moeda(s) de R$ 0.05\n", coin05);
    //0.01 R$
    int coin01=(((((((((((n%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)%10)%5)/1;
    printf("%d moeda(s) de R$ 0.01\n", coin01);
    return 0;
}
