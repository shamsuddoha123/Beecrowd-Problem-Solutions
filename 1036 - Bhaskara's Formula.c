#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,D,x1,x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    D=b*b-4*a*c;
    x1=(-b+(sqrt(D)))/(2*a);
    x2=(-b-(sqrt(D)))/(2*a);
    if(a==0 || D<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
    return 0;
}
