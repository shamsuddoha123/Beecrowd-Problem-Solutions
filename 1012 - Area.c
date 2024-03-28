#include <stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double TRIANGULO=0.5*A*C;
    double CIRCULO=3.14159*C*C;
    double TRAPEZIO=0.5*(A+B)*C;
    double QUADRADO=B*B;
    double RETANGULO=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
    return 0;
}