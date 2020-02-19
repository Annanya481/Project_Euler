#include<stdio.h>
#include<math.h>
int main()
{
    int sum1 = 0, sum2 = 0, diff, temp = 0;
    for(int i=1; i<=100; i++)
    {
        int temp2 = pow(i, 2);
        sum1 += temp2;
    }
    for(int i=1; i<=100; i++)
    {
        temp += i;
    }
    int temp3 = pow(temp, 2);
    sum2 += temp3;
    diff = sum2 - sum1;
    printf("%d", diff);
    return 0;
}