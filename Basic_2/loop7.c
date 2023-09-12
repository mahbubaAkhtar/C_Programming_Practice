#include<stdio.h>
int main()
{
    int num,i=1,s;
    printf("Enter any number : ");
    scanf("%d",&num);
    while(i<=10)
    {
        s=num*i;
        printf("%d*%d=%d\n",num,i,s);
        i++;
    }



    return 0;
}

