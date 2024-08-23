#include<stdio.h>
#include<string.h>

void reverse_stringwords(char ch[], int s, int e)
{
    char temp;
    while(s<e)
    {
        temp=ch[s];
        ch[s]=ch[e];
        ch[e]=temp;
        s++;
        e--;
    }
}

int main()
{
    char ch[100];
    int s, e;
    
	printf("Enter a statment :\n\n");
    gets(ch);
    
	e=0;
    s=0;
    while(ch[e])
    {
        for(e=s;ch[e]&&ch[e]!=' ';e++);
        
        reverse_stringwords(ch, s, e-1);
        
        s=e+1;
    }
    printf("\n%s ",ch);
    
	return 0;
}


