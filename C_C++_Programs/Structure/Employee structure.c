//Example: we want to create employee structure input data in employee structure and display it.

#include<stdio.h>
struct Employee
{
	int id;
	char name[90];
	long int sal;
};
int main()
{
	struct Employee emp;
	printf("\nEnter Name, ID and Salary of employee :\n");
	scanf("%s %d %ld",&emp.name,&emp.id,&emp.sal);
	printf("\nName is %s\n",emp.name);
	printf("\nId is %d\n",emp.id);
	printf("\nSalary is %ld\n",emp.sal);
	return 0;
}

