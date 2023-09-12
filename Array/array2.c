#include<stdio.h>
int main()
{
    int marks[5]={10,20,30,40,50},sum=0,i;
    for(i=0;i<=4;i++)
    {
        sum=sum+marks[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f",(float)sum/5);



    return 0;
}
