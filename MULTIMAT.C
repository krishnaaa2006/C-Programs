//multiplication of matrix

void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,k;
	clrscr();
	printf("Enter a m and n\n");
	scanf("%d%d",&m,&n);

	printf ("Enter a matrix A\n");

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{

			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter a matrix B\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			scanf("%d",&b[i][j]);
		}
	}

	printf("Display matrix A\n");

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{

			printf("%d",a[i][j]);
		}
		printf("\n");

	}

	printf("Display matrix B\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{
			c[i][j]=0;

		for(k=0;k<m;k++)
		{
			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
		}

		}
	}

	printf("display multiplication matrix\n");

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{
			printf("%d",c[i][j]);
		}

		printf("\n");
	}
	getch();
}