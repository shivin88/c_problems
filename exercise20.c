#include <stdio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'s','h', 'i', 'v','i','n', '\0'};
    // char str[7]={"shivin"}
    char str[10];
    gets(str);
    printf("using custom func printstr\n");
    printStr(str);
    printf("using printf \n%s\n",str);
    printf("using puts\n");
    puts(str);
    return 0;
}