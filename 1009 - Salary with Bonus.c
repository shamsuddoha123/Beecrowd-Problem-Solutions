#include <stdio.h>
int main()
{
    double b,c;
    char name[5];
    scanf("%s", name);
    scanf("%lf\n", &b);
    scanf("%lf", &c);
    printf("TOTAL = R$ %.2lf\n", (b+((c*15)/100)));
    return 0;
}
