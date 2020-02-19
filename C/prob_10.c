#include<stdio.h>
bool is_prime(int num)
{
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int sum = 2;
    for(int i=3; i<50; i++)
    {
        if(is_prime(i)==true)
        {
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}