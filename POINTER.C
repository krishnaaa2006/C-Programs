void main()
{
	int *a,*b,c;
	a=89;
	*a=12;
	b=44;
	*b=20;
	c=*a+*b;
	b=a;
	*b=*a+c;
	printf("%d%d%d",*a,*b,c);

	getch();
}