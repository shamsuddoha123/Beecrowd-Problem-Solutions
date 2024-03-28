#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    //100 R$
    int taka100=n/100;
    printf("%d nota(s) de R$ 100,00\n",taka100);
    //50 R$
    int taka50=(n%100)/50;
    printf("%d nota(s) de R$ 50,00\n",taka50);
    //20 R$
    int taka20=((n%100)%50)/20;
    printf("%d nota(s) de R$ 20,00\n",taka20);
    //10 R$
    int taka10=(((n%100)%50)%20)/10;
    printf("%d nota(s) de R$ 10,00\n",taka10);
    //5 R$
    int taka5=((((n%100)%50)%20)%10)/5;
    printf("%d nota(s) de R$ 5,00\n",taka5);
    //2 R$
    int taka2=(((((n%100)%50)%20)%10)%5)/2;
    printf("%d nota(s) de R$ 2,00\n",taka2);
    //1 R$
    int taka1=((((((n%100)%50)%20)%10)%5)%2)/1;
    printf("%d nota(s) de R$ 1,00\n",taka1);
    return 0;
}
