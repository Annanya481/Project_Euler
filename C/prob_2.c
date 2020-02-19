#include<stdio.h>
int main()
{
    int a=0, b=1, sum=0, c;
    do
    {
        c = a+b;
        if(c%2==0)
        {
            sum+=c;
        }
        a = b;
        b = c;
    }while(c<4000000);
    printf("\nSUM:  %d", sum);
    return 0;
}