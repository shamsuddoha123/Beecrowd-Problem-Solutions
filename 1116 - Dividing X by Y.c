#include<stdio.h>
int main()
{
    int test_case,dividend,divisor,i;
    scanf("%d", &test_case);
    for(i=1;i<=test_case;i++)
    {
        scanf("%d %d", &dividend, &divisor);
        if(divisor==0)
        {
            printf("divisao impossivel\n");
        }
        else if(divisor!=0)
        {
            printf("%.1f\n", (float)dividend/divisor);
        }
    }
    return 0;
}