#include<stdio.h>
int main()
{
    int num,row,col;
    printf("Enter any number : ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }
    for(row=num-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }
return 0;
}

