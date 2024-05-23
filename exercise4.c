#include <stdio.h>
int main() 
{
    int age,index=0;
    printf("enter your age=");
    scanf("%d",&age);
    do
    {
        printf("%d\n",index+1);
        index=index+1;

    } while (index<age);
    return 0;
        
    }
    