#include<stdio.h>
int main()
{
    int i,j;
    for(i=1,j=60;j>=0;j=j-5,i=i+3)
    /* If there are multiple initialization, condition or
    increment/decrement in loop we must use (,) in between
    the initializations or conditions or increments/decrements
    and then we must use (;) after the end of initializations and
    after conditions.
    */
    {
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
}