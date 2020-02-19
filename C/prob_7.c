#include<stdio.h>
bool is_prime(int num)
{
    for(int i=2; i<=num/2; i++)
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
    int ct = 0, i=2;
    while(ct<=10001)
    {
        if(is_prime(i)==true)
        {
            printf("%d \t", i);
            ct++;
        }
        i++;
    }
    return 0;
}