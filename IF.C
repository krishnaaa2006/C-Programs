void main()
{
	float l,v;
	clrscr();
	printf("Enter a length\n");
	scanf("%f",&l);
	if(l<19.64)
	{
		v=l*l*l;
		printf("its cube is %f",v);
	}
	else
	{
		v=l*l;
		printf("its square is %f",v);
	}
	getch();
}