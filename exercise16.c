#include <stdio.h>
int main()
{
    int arr[]={2,3,4,5,6,7,8};
    int *arrptr=arr;
    printf("the address of first element of array is %d\n",&arr[0]);
    printf("the address of first element of array is %d\n",arr);
    printf("the address of second element of array is %d\n",&arr[1]);
    printf("the address of second element of array is %d\n",arr+1);
    printf("the address of second element of array is %d\n",arrptr--);

    printf("\n");
    printf("the value of first element of array is %d\n",*(&arr[0]));
    printf("the value of first element of array is %d\n",arr[0]);
     printf("the value of first element of array is %d\n",*arr);
    printf("the value of second element of array is %d\n",*(&arr[1]));
    printf("the value of second element of array is %d\n",arr[1]);
     return 0;
}