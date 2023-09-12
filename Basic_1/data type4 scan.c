#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char ch;
    printf("Enter integer number\nfloat number\ndouble number\ncharecter number\n");
    scanf("%d %f %lf %c",&num1,&num2,&num3,ch);
    printf("All number %d %f %lf %c\n",num1,num2,num3,ch);



    return 0;
}
