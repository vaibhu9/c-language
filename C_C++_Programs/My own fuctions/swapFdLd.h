int swapFdLd(int n)
{
	int temp=n;
	while(n>0)
	{
		int count++;
		n=n/10;
	}
	n=temp;
	int ld=n%10;
	int p=pow(10,count-1);
	int fd=n/p;
	n=n/10;
	int p1=pow(10,count-2);
	int mn=n%p1;
	int sp=ld*p+mn*10+fd;
	
	return sp;
}
