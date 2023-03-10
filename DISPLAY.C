void main()
{
	int s1,s2,s;
	int n;
	int c;
	clrscr();
	printf("\n Enter how many terms to be displayed");
	scanf("%d",&n);
	s1=0;
	s2=1;
	printf("\n%d",s1);
	printf("\n%d",s2);

	for(c=3;c<=n;c=c+1)
	{
		s=s1+s2;
		printf("\n%d",s);
		s1=s2;
		s2=s;
	}
	getch();
}