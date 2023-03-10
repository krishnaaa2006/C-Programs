void main()
{
	int a[10][10];i,j,m,n,no;
	clrscr();
	printf("Enter a no \n");
	scanf("%d",&no);

	printf("Enter a element\n");

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("display an element\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	getch();
}