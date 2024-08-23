/////////Practical Session- 28-08-2023/////////
//========================================================================================================
//Q.1) WAP program to perform following operation using function name as:
//========================================================================================================
//1) calAdd():
//2) calSub():
//3)calMul():
//4)calDiv():
//5)calMod():

/*
#include<stdio.h>

int calAdd(int x,int y)
{
	return x+y;
}
int calSub(int x,int y)
{
	return x-y;
}
int calMul(int x,int y)
{
	return x*y;
}
int calDiv(int x,int y)
{
	return x/y;
}
int calMod(int x,int y)
{
	return x%y;
}

int main()
{
	int a,b;
	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
	int result1=calAdd(a,b);
	int result2=calSub(a,b);
	int result3=calMul(a,b);
	int result4=calDiv(a,b);
	int result5=calMod(a,b);
	printf("\nAddition is = %d",result1);
	printf("\nSubtraction is = %d",result2);
	printf("\nMultiplication is = %d",result3);
	printf("\nDivision is = %d",result4);
	printf("\nReminder/Mode is = %d",result5);
	
	return 0;
}
*/

//========================================================================================================
//========================================================================================================
//Q.2) WAP to perform following operation using function name as:
//========================================================================================================
//1)calAreaOfCircle():
//2)calAreaofRectangle():
//3) caAreaofTriangle():
//4)calAreaofQuadriateral():
//5)calAreaofCircumference():
//========================================================================================================

/*
#include<stdio.h>

float p=3.14;
float calAreaofcircle(float r)
{
	return r*r*p;
}

int calAreaofrectangle(int x, int y)
{
	return x*y;
}

int calAreaoftriangle(int x, int y)
{
	return (x*y)/2;
}

float calAreaofquadrilateral(float x, float y)
{
	return 1/2*x*y;
}

float calcircumference(float x)
{
	return 2*p*x;
}

int main()
{
	int c,r,l,b,h;
	float d,ph,result;
	printf("1) Area of Circle.\n2) Area of Rectangle.\n3) Area of Triangle.\n4) Area of Quadriateral.\n5) Area of Circumference.");
	printf("\n\nEnter the choice : ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
				printf("Enter the radius :\n");
				scanf("%d",&r);

				result=calAreaofcircle(r);
				printf("\nArea of Circle is : %.2f",result);
				break;
		case 2:
				printf("Enter the length and breadth :\n");
				scanf("%d%d",&l,&b);
	
				result=calAreaofrectangle(l,b);
				printf("\nArea of Rectangle is : %.2f",result);
				break;
		case 3:
				printf("Enter the lenght and height :\n");
				scanf("%d%d",&l,&h);
				
				result=calAreaoftriangle(l,h);
				printf("\nArea of Triangle is : %.2f",result);
				break;
		case 4:
				printf("Enter the diagonal and perpendicular height :\n");
				scanf("%d%d",&d,&ph);
	
				result=calAreaofquadrilateral(d,ph);
				printf("\nArea of Quadrilateral is : %.2f",result);
				break;
		case 5:
				printf("Enter the radius :\n");
				scanf("%d",&r);
	
				result=calcircumference(r);
				printf("\nCircumference of Circle is : %.2f",result);
				break;
		default : 	
				printf("\nEntered wrong choice.");	
	}
	
	return 0;
}
*/

