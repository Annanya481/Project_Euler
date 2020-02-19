#include<stdio.h>
int check_prime(int n)
{
    if(n==2)
    {
        return 1;
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    long long int num = 600851475143; 
    int max = 0;
   for(int i=2; i<num; i++)
   {
       if(num%i==0)
       {
           int check = check_prime(i);
           if(check==1&&i>max)
           {
               max = i;
           }
       }
   }
   printf("\n%d", max);
   return 0;
}