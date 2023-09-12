
#include<stdio.h>

int main()
{
    struct person
{
    int age;
    float salary;
};
    struct person person1,person2;
    person1.age=27;
    person1.salary=12550.50;
    printf("Person1 : \n ");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    person2.age=25;
    person2.salary=12590.59;
    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    getch();
}
