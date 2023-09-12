#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letteer:");
    scanf("%c",&ch);

    if(ch>'A' && ch<'Z')
        printf("Capital letter");
    else if(ch>'a' && ch<'z')
        printf("small letter");

    else
        printf("Not a letter");



    return 0;
}
