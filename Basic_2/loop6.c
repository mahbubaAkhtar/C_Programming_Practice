#include<stdio.h>
int main()
{
    int num,i,s;
    printf("Enter any number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        s=num*i;
        printf("%d*%d=%d\n",num,i,s);
    }



    return 0;
}
