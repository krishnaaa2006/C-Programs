void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter four numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is max",a)
	}
	else if(b>c && b>d)
	{
		printf("%d is max",b)
	}
	else if(c>d)
	{
		printf("%d is max",c);
	}
	else
	{
		printf("%d is max",d);
	}
	getch();
}