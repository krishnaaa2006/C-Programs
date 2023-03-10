void main()
{
	int i,j,k;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}