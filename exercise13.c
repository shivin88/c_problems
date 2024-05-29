#include <stdio.h>
int main()
{
    int i,j;
    int marks[2][4]= {{3, 5, 6, 7}, {4, 6, 8, 9}};
    for (i = 0;i < 2;i++)
    {
        for (j = 0;j< 4;j++)
        {
            printf("the value of %d,%d is %d\n", i, j, marks[i][j]);
        }
    }
    return 0;
}