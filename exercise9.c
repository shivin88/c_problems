#include <stdio.h>
int factorial(int num)
{
    if (num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num-1));
    }
}

int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d",&num);
    printf("the answer of %d is %d\n",num,factorial(num));
    return 0;
}
