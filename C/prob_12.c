#include<stdio.h>
#include<math.h>
int divisors(int num)
{
    int ct=0;
    for(int i=1; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            ct++;
        }
    }
    return ct;
}
int main()
{
    int sum = 0;
    int i = 1;
    sum += i;
    if(divisors(sum)==5)
    {
        printf("%d", sum);
    }
    else
    {
        i++;
    }
    return 0;
}