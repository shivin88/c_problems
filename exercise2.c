#include <stdio.h>
int main() 
{
    int age;
    printf("enter the age: \n");
    scanf("%d",&age);
    if (age>=18)
    {printf("you can vote");}
    else if (age>=10)
    {printf("half vote is counted");}
    else if (age>=3)
    {printf("you cannot vote");}
    return 0;
}