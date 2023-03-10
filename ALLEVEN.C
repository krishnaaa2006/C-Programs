void main()
{
	int a[10][10],i,j,m,n,s=0;
	clrscr();
	printf("Enter m and n");
	scanf("%d%d",&m,&n);

	printf("Enter the matrix \n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Display matrix before transpose\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
	printf("\n");
	}


	for(i=0;i<m;i++);
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]%2==0)
			{
				s=s+a[i][j];
			}
		}
	}
	printf("Sum of all even no=%d",s);
	getch();
}