#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("How much number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f",(float)sum/n);

    return 0;
}
