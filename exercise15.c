#include <stdio.h>
int main()
{
    int a=5;
    int* ptr=&a;
    int* ptr2=NULL;
    printf("the address of a is %p\n",&ptr);
    printf("the address of a is %p\n",&a);
    printf("the address of a is %p\n",ptr);
    printf("the address of a is %p\n",ptr2);
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",* ptr);
    return 0;
}