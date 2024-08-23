int revNum(int n)
{
/*	while(n>0)
	{
		int r=n%10;
		n=n/10;
		int rev=rev*10+r;
	}
*/	
	if(n>0)
	{
		int r=n%10;
		n=n/10;
		int rev=rev*10+r;
		revNum(n);
	}
	return rev;
}
