#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Entry two number:");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("sum is:%d\n",result);
    result=num1-num2;
    printf("sub is:%d\n",result);
    result=num1*num2;
    printf("mul is:%d\n",result);
    result=num1/num2;
    printf("div is:%d\n",result);
    result=num1%num2;
    printf("remainder is:%d\n",result);




    return 0;
}
