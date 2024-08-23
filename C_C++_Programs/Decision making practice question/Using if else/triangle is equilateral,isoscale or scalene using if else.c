/*
#include<stdio.h>
int main()
{
	int s1,s2,s3;
	
	printf("Enter the three sides of triangles:\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2&&s1==s3&&s2==s3)
	{
		printf("\nThe triangle is equilateral");
	}
	else if(s1==s2&&s1!=s3)
	{
		printf("\nThe triangle is isoscalene");
	}
	else
	{
		printf("\nnot");
	}
}
*/

#include<stdio.h>
int main()
{ 
   int side1, side2, side3;
   
   printf("Enter sides of triangle:\n");
   scanf("%d%d%d",&side1,&side2,&side3);
   
   if(side1 == side2 && side2 == side3)
   {
	   printf("\nThe Given Triangle is equilateral");
   }
   else if(side1 == side2 || side2 == side3 || side3 == side1)
   {
	   printf("\nThe given Triangle is isosceles");
   else
      printf("\nThe given Triangle is scalene");
    return 0;
}
