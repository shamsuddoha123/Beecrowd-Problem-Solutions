#include<stdio.h>
int main()
{
    double salary;
    scanf("%lf", &salary);
    if(salary>=0.00 && salary<=2000.00)
    {
        printf("Isento\n");
    }
    else if(salary>=2000.01 && salary<=3000.00)
    {
        printf("R$ %.2lf\n", (salary-2000)*0.08);
    }
    else if(salary>=3000.01 && salary<=4500.00)
    {
        printf("R$ %.2lf\n", ((salary-3000)*0.18+1000*0.08));
    }
    else if(salary>4500.00)
    {
        printf("R$ %.2lf\n", ((salary-4500)*0.28+1500*0.18+1000*0.08));
    }
    return 0;
}