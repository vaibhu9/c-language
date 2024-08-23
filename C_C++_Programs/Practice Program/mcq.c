#include<stdio.h>
int main(){
	int a=5,b=5,c=0,d,e,f,g;
	d=a&&b;
	e=a&&c;
	f=a!=b;
	g=a!=c;
	printf("d=%d\ne=%d\nf=%d\ng=%d",d,e,f,g);
	
	return 0;
}
