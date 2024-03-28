#include<stdio.h>
int main()
{
    int d1,h1,m1,s1;
    int d2,h2,m2,s2;
    int ds1,ds2;
    int n;
    int outputday,outputhour,outputminute,outputsecond;
    scanf("Dia %d\n", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d\n", &d2);
    scanf("%d : %d : %d\n", &h2, &m2, &s2);
    ds1=s1+(m1*60)+(h1*3600)+(d1*86400);
    ds2=s2+(m2*60)+(h2*3600)+(d2*86400);
    n=ds2-ds1;
    outputday=(n/86400);
    outputhour=((n%86400)/3600);
    outputminute=(((n%86400)%3600)/60);
    outputsecond=(((n%86400)%3600)%60);
    printf("%d dia(s)\n", outputday);
    printf("%d hora(s)\n", outputhour);
    printf("%d minuto(s)\n", outputminute);
    printf("%d segundo(s)\n", outputsecond);
    return 0;
}