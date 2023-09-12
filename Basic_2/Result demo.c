#include<stdio.h>
int main()
{
    int mark;
    printf("Enter any number:");
    scanf("%d",&mark);

    if(mark>=33)
        printf("PASS");
    else
        printf("FAIL");


    return 0;
}
