void main()
{
	int i,x,y,p=1;
	clrscr();
	printf("Enter the x and y\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<y;i++)
	{
		p=p*x;
	}
	printf("Power %d",p);
	getch();
}