#include <stdio.h>
int main() 
{
    int i,j,k,num;
    for(i=0,j=4;i<5;i++,j--)
    {
        printf("%d %d\n",i,j);
        for (k = 0; k < 6; k++)
        {
            printf("%d\n",k);
            printf("enter a number=\n");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
        
    }
     end:
     return 0;
}