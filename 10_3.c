#include<stdio.h>
struct Employee
{
    char name[100];
    int age;

    struct data
    {
        char address[1000];
        int salary;
    }e2;
}e1;
void main()
{
    printf("\nEnter your Name: ");
    fflush(stdin);
    scanf("%[^\n]s",e1.name);
    printf("\nEnter your Age: ");
    scanf("%d",&e1.age);
    printf("\nEnter your Address: ");
    fflush(stdin);
    scanf("%[^\n]s",e1.e2.address);
    printf("\nEnter your Sallary: ");
    scanf("%d",&e1.e2.salary);
    display();
    printf("\nTHIS PROGRAM IS CREATED BY 22CE033");
}
void display()
{
    printf("\nName: %s",e1.name);
    printf("\nAge: %d",e1.age);
    printf("\nAddress: %s",e1.e2.address);
    printf("\nSalary: %d",e1.e2.salary);
    printf("\nProcess finished!!");

}
