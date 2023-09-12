//Write a program that calculates the area of a triangle
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("base:");
    scanf("%f",&base);
     printf("height:");
    scanf("%f",&height);
    area=1/(float)2*base*height;
    printf("area:%.2f\n",area);



    return 0;
}
