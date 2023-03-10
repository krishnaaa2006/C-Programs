void main()
{
	int no,d,s=0;
	clrscr();
	printf("Enter no\n");
	scanf("%d",&no);
	while(no!=0)
	{
		d=no%10;
		no=no/10;
		s=s*10+d;
	}
	printf("Sum of digit=%d\n",s);
	getch();
}