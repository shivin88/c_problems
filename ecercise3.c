#include <stdio.h>
int main() 
{
    int age;
    int marks;
    printf("enter your age=\n");
    printf("enter your marks=\n");
    scanf("%d",&age);
    scanf("%d",&marks);
    switch (age)
    {
        case 2:
        printf("you are young");
        case 18:
        printf("you are a teen");
        default:
        printf("error");
        switch (marks)
        {
        case 10:
        printf("you have failed");
        default:
        printf("you have passed");
        }

    }
}