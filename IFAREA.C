//Enter radius if radius is less than 25.3 than find area of circle
void main()
{
	float r,a;
	clrscr();
	printf("Enter radius\n");
	scanf("%f",&r);
	if(r<25.3)
	{
		a=3.14*r*r;
		printf("Area of circle is %f",a);
	}
	getch();
}