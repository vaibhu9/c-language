int digitCount(int n)
{
/*	while(n!=0)
	{
		int digits++;
		n=n/10;
	}
*/	
	if(n!=0)
	{
		int digits++;
		n=n/10;
		digitCount(n);
	}
	return digits;
}
