#include<stdio.h>
int main()
{
    int i=1,num,fact=1;
    printf("Enter any number : ");
    scanf("%d",&num);
    do
    {
        fact=fact*i;
         printf("%d\n",fact);

        i++;
    }
    while(i<=num);



    return 0;
}
