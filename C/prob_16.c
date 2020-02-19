#include<stdio.h>
#include<math.h>
int main()
{
    int num = 1;
    int factor, sum = 0;
    for(int i=1; i<=1000; i++)
    {
        num *= 2;
    }
    int temp = num;
    while(temp)
    {
        temp = temp/10;
        factor = factor*10;
    }
    while(factor>1)
    {
        factor = factor/10;
        sum += (num/factor);
        num = num%factor;
    }
    printf("%d", sum);
    return 0;
}