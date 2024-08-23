/*#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,sum;
	
	printf("Enter an Positive integer :\n");
	scanf("%d",a);
	
	b
	=a%10;
	c=a/10;
	d=a-b-(c*100);
	sum=b+c+d;
	
	
	(a>0&&a<500)?printf("The sum of given integer digits is = %d",sum):printf("The given integer is out of range.");
	
	return 0;
}*/


#include <stdio.h> 
int main() 
{ 
    int a, x = 0, y;
	printf("Input a positive number less than 500: \n"); 
	scanf("%d", & a); 
	y = a; 
	if (y < 1 || y > 500) 
	{ 
	   printf("\nThe given number is out of range\n");
    } 
	 else 
	 { 
	   x += y % 10; 
	   y /= 10; 
	   x += y % 10; 
	   y /= 10; 
	   x += y % 10; 
	   printf("\nSum of the digits of %d is %d\n", a, x); 
	 } return 0; 
}


/*#include<stdio.h>
int main()
{
	int no,rem,sum=0;
	printf("Enter three digits number :\n");
	scanf("%d",&no);
	
	(no<=0&&no>=500) ? printf("\nThis digits is out of range"):
	
	rem==no%10;
	no=no/10;
	sum=sum+rem;
	
	rem=no%10;
	no=no/10;
	sum=sum+rem;
	
	rem=no%10;
	no=no/10;
	sum=sum+rem;
	
	
	printf("\nSum of above digits is : %d",sum);
	
	return 0;
}
*/
