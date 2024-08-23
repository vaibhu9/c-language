#include<stdio.h>
struct address{
	int hno,pin;
	char city[20];
};
struct employee{
	char name[20];
	struct address add;
};
int main(){
	struct employee emp;
	printf("Enter details :\n");
	scanf("%s%d",&emp.name,&emp.add.hno);
	scanf("%s%d",&emp.add.city,&emp.add.pin);
	printf("\nEmployee info :\n");
	printf("%s\n%d\n",emp.name,emp.add.hno);
	printf("%s\n%d",emp.add.city,emp.add.pin);
}
