#include<stdio.h>
int main()
{
    int num,row,col;
    printf("Enter any number : ");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col%2);
        }
        printf("\n");
    }



    return 0;
}
