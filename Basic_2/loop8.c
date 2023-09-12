#include<stdio.h>
int main()
{
    while(1){
    int num,i=1,s;
    printf("Enter any number : ");
    scanf("%d",&num);
    do
    {
        s=num*i;
        printf("%d*%d=%d\n",num,i,s);
        i++;
    }
    while(i<=10);
    }
    return 0;
}
