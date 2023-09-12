#include<stdio.h>
int main()
{
    int i=1,num,fact=1;
    printf("Enter any number : ");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
       i++;
    }
    printf("%d\n",fact);




    return 0;
}
