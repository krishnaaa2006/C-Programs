void main()
{
	int c,num,ans;
	clrscr();
	printf("\n Enter the numbers");
	scanf("%d",&num);

	printf("%d!",num);
	ans=1;
	for(c=1;c<=num;c=c+1)
	{
		printf("%d*",c);
		ans=ans*c;
	}
	printf("%d!=%d",num,ans);
	getch();
}