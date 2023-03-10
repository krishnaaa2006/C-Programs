void main()
{
	int a[3][4],i,j;
	clrscr();

	printf("Enter a matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{

			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
