#include <stdio.h>
int main()
{
    int marks[4],i;
    for ( i=0;i<4;i++)
    {
        printf("enter the %d value for array \n",i);
        scanf("%d",&marks[i]);
    }
    for ( i=0;i<4;i++)
    {
        printf("the value for %d is %d\n",i,marks[i]);
    }
}