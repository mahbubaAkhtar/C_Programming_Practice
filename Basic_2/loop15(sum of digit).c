#include<stdio.h>
int main()
{
    int num,temp,sum=0,rem;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum = sum+rem;
        temp=temp/10;

    }
    printf(" sum of digit %d\n",sum);
    return 0;
}
