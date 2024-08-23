int naturalnum(int i,int n)
{
	if(i<=n)
	{
		printf("\n%d",i);
		i++;
		naturalnum(i,n);
	}
}
