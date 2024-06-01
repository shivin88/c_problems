// call by refrence example1
#include <stdio.h>
// void swap(int *x,int *y);

// int main()
// {
//     int a = 1, b = 2;
//     printf("%d and %d\n", a, b);
//     swap(&a, &b);
//     printf("%d and %d\n", a, b);
//     return 0;
// }

// void swap(int *x,int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }

int change_value(int *a)
{
 *a =35;
}
int main()
{
    int a=2;
    printf("value of a was %d\n",a);
    change_value(&a);
    printf("value of a now is %d",a);
    return 0;
}

