void main()
{
	int a[100],i,flag=0,n,no;
	clrscr();

	printf("Enter a n\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter a no to search\n");
	scanf("%d",&no);

	for(i=0;i<n;i++)
	{
		if(no==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("no is not found");
	}
	else
	{
		printf("no is  found");
	}
	getch();
}
