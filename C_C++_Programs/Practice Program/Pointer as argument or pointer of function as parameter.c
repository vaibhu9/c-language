#include<stdio.h>
void display (void (*p)()){
	int i;
	for(i=1;i<=5;i++){
		p(i);
	}
}
void print_numbers(int num){
	printf("%d\t",num);
}
int main(){
	void (*p)(int)=&print_numbers;
	printf("The values are :\t");
	display(p);
	return 0;
}
