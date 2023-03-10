
void main()
{
	int a[100],i,j,n;
	clrscr();
	printf("Enter a n\n");
	scanf("%d",&n);

	printf("Enter an element \n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display an element\n");

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);

	}
	printf("Display element only even\n");

	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d",a[i]);

		}
	}
	getch();

}