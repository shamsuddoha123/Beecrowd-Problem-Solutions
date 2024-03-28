#include <stdio.h>
int main()
{
    int time,avgspeed;
    scanf("%d\n%d", &time, &avgspeed);
    printf("%.3lf\n", (time*avgspeed)/12.0);
    return 0;
}