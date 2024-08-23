#include<stdio.h>
int main()
{
	int mn;
	
	printf("Enter the month number:\n");
	scanf("%d",&mn);
	
	switch (mn)
	{
		case 1:printf("\n31");
		break;
		case 2:printf("\n28 or 29");
		break;
		case 3:printf("\n31");
		break;
		case 4:printf("\n30");
		break;
		case 5:printf("\n31");
		break;
		case 6:printf("\n30");
		break;
		case 7:printf("\n31");
		break;
		case 8:printf("\n31");
		break;
		case 9:printf("\n30");
		break;
		case 10:printf("\n31");
		break;
		case 11:printf("\n30");
		break;
		case 12:printf("\n31");
		break;
		default:
			printf("\ninvalid");
			
	}
	return 0;
}
