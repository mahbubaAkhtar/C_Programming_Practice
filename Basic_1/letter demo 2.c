#include<stdio.h>
int main()
{
    char upper;
    printf("Entry any uppercase letter:");
    scanf("%c",&upper);
    printf("The lowercase letter:%c",upper+32);

    return 0;
}
