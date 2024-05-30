#include <stdio.h>
int main()
{
    int i,sum=0,sid[7];
    for (i=0;i<7;i++)
    {
        printf("enter the %d sid for array\n",i);
        scanf("%d",&sid[i]);
    }
    for (i=0;i<7;i++)
    {
        sum=sum+sid[i];
    }
    printf("%d",sum);
    
}