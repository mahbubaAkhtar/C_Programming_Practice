#include<stdio.h>
struct person       //global structure
{
    int age;
    float salary;
};
int main()
{
    struct person person1 = {27,25550.50};    // local variable;
     struct person person2 = {20,25550.50};
      struct person person3=person2;

    printf("Person1 : \n ");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);
    printf("Person3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);

    getch();
}

