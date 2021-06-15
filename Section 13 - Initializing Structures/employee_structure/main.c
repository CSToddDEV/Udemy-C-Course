/*
Author: Calvin Todd
Assignment: Declaring and initializing an employee structure
*/

#include <stdio.h>
#include <stdlib.h>

//Declare structure
struct Employee {
    char name [30];
    int hireDate;
    float salary;
};

int main()
{
    //Declare variables
    struct Employee emp1, emp2, emp3;
    struct Employee *pEmp1, *pEmp2, *pEmp3;

    //Point the pointers
    pEmp1 = &emp1;
    pEmp2 = &emp2;
    pEmp3 = &emp3;

    //Get and load emp1 data
    printf("Please enter the employees name: ");
    gets(pEmp1->name);
    printf("\nPlease enter hire date in form mmddyy: ");
    scanf(" %d", &pEmp1->hireDate);
    printf("\nPlease enter salary: ");
    scanf(" %f", &pEmp1->salary);
    printf("\n Employee, %s, was hired on %d making %.2f a year.\n\n", pEmp1->name, pEmp1->hireDate, pEmp1->salary);

    //Get and load emp2 data
    printf("Please enter the employees name: ");
    gets(pEmp2->name); //Consume trailing newline
    gets(pEmp2->name);
    printf("\nPlease enter hire date in form mmddyy: ");
    scanf(" %d", &pEmp2->hireDate);
    printf("\nPlease enter salary: ");
    scanf(" %f", &pEmp2->salary);
    printf("\n Employee, %s, was hired on %d making %.2f a year.\n\n", pEmp2->name, pEmp2->hireDate, pEmp2->salary);

    //Get and load emp3 data
    printf("Please enter the employees name: ");
    gets(pEmp3->name); //Consume trailing newline
    gets(pEmp3->name);
    printf("\nPlease enter hire date in form mmddyy: ");
    scanf(" %d", &pEmp3->hireDate);
    printf("\nPlease enter salary: ");
    scanf(" %f", &pEmp3->salary);
    printf("\n Employee, %s, was hired on %d making %.2f a year.\n\n", pEmp3->name, pEmp3->hireDate, pEmp3->salary);

    return 0;
}
