#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str), flag = 0;
    if(len%2==0)
        flag = 1;
    else
    {
        int i;
        for(i=0; i<len; i++)
        {
            if(str[i]==str[len-i-1])
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag==1)
        printf("TAK");
    else
        printf("NIE");
    return 0;
}