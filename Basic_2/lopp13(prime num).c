#include<stdio.h>
int main()
{
    int i=2,count=0,num;
    printf("Enter any positive number : ");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
            {count++;
            break;
    }
    }
    if(count==0)
       {
    printf("Prime number\n");}
    else
        printf("Not prime number");



    return 0;
}
