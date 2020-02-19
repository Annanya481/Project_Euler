#include<stdio.h>
int check_palindrome(int product)
{
    int reverse = 0;
    int num = product;
    while(product!=0)
    {
        reverse = (reverse*10) + (product%10);
        product/=10;
    }
    if(num==reverse)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int max_product = 0, product;
    for(int i=999; i>=100; i--)
    {
        for(int j=i; j>=100; j--)
        {
            product = i*j;
            if((check_palindrome(product)==1)&&product>max_product)
            {
                max_product = product;
            }
        }
    }
    printf("%d", max_product);
    return 0;
}