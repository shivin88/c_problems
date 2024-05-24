#include <stdio.h>
int sum(int a,int b);
void printstar(int n);
int entervalue();
void enterage();
int main()
{
    sum(3,5);
    printstar(5);
    entervalue();
    enterage();
    return 0;
}
int sum(int a,int b)   //function 1
{
    int c;
    c=a+b;
    printf("the sum is %d\n",c);
    return 0;
}
void printstar(int n)   //function 2
{
    int i;
    for (i=0; i<n;i++)
    {
        printf("%c\n",'@');
    }
}
int entervalue()  //function 3
{
    int p;
    printf("enter any value \n");
    scanf("%d",&p);
    printf("the value is %d\n",p);
    return 0;
}
void enterage()   //function 4
{
    printf("hello world \n");
  
}
