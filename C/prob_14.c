#include<stdio.h>
int Collatz(int num)
{
    int ct = 0;
    while(num>=1)
    {
        if(num%2==0)
        {
            num = num/2;
        }
        else
        {
            num = (3*num)+1;
        } 
        ct++;
    }
    return ct;
}
int main()
{
    int max = 0, i;
    for( i = 1000000; i>=1; i++)
    {
        if(Collatz(i)>max)
        {
            max = Collatz(i);
        }
    }
    printf("%d", i);
}