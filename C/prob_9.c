#include<stdio.h>
#include<math.h>
int main()
{
    int product;
    for(int i=1; i<1000; i++)
    {
        for(int j=1; j<1000; j++)
        {
            for(int k=1; k<1000; k++)
            {
                int temp1 = pow(i, 2);
                int temp2 = pow(j, 2);
                int temp3 = pow(k, 2);
                if((temp1+temp2==temp3)&&(i+j+k==1000))
                {
                    product = i*j*k;
                    break;
                }
            }
        }
    }
    printf("\nPRODUCT:  %d", product);
    return 0;
}