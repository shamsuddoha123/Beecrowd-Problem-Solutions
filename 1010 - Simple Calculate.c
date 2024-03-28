#include <stdio.h>
int main()
{
    int code1,unit1,code2,unit2;
    double price1,price2,totalprice1,totalprice2,theamounttobepaid=0;
    scanf("%d %d %lf", &code1, &unit1, &price1);
    scanf("%d %d %lf", &code2, &unit2, &price2);
    totalprice1=unit1*price1;
    totalprice2=unit2*price2;
    theamounttobepaid=totalprice1+totalprice2;
    printf("VALOR A PAGAR: R$ %.2lf\n", theamounttobepaid);
    return 0;
}