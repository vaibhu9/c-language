#include<stdio.h>
int main()
{
	int o=1;
	char ch;
	switch(o)
	{
		case 1:
			ch=0;
					do
					{
						printf("%c ",ch++);
					}while(ch>0&&ch<=255);
					break;
	}
	return 0;
}
