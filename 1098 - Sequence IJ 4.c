#include<stdio.h>
int main()
{
    int i;
    int j=10;
    for(i=0;i<=20;i+=2)
    {
        if(i==0)
        {
            printf("I=%d J=%d\n", i/10, j/10);
            printf("I=%d J=%d\n", i/10, (j+10)/10);
            printf("I=%d J=%d\n", i/10, (j+20)/10);
        }
        else if(i==10)
        {
            printf("I=%d J=%d\n", i/10, (j+10)/10);
            printf("I=%d J=%d\n", i/10, (j+20)/10);
            printf("I=%d J=%d\n", i/10, (j+30)/10);
        }
        else if(i==20)
        {
            printf("I=%d J=%d\n", i/10, (j+i)/10);
            printf("I=%d J=%d\n", i/10, (j+i+10)/10);
            printf("I=%d J=%d\n", i/10, (j+i+20)/10);
        }
        else
        {
            printf("I=%.1lf J=%.1lf\n", (double)i/10, (double)(j+i)/10);
            printf("I=%.1lf J=%.1lf\n", (double)i/10, (double)(j+i+10)/10);
            printf("I=%.1lf J=%.1lf\n", (double)i/10, (double)(j+i+20)/10);
        }   
    }
    return 0;
} 