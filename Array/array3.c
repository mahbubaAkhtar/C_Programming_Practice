#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    printf("Enter any number : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f",(float)sum/10);



    return 0;
}
