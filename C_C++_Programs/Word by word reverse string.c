#include<stdio.h>
#include<string.h>

void reverse_string(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];
    int start, end;
    
	printf("Enter a statment :\n\n");
    gets(str);
    
	end=0;
    start=0;
    while(str[end])
    {
        for(end=start;str[end]&&str[end]!=' ';end++);
        
        reverse_string(str, start, end-1);
        
        start=end+1;
    }
    printf("\n%s ",str);
    
	return 0;
}


