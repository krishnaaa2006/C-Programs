#include<stdio.h>
#include<conio.h>

void add(int p,int q)
{
	int r;
	r=p+q;
	printf("Addition %d",r);

}
void main()
{
	int a,b;
	clrscr();
	printf("Enter a two numbers\n");
	scanf("%d%d",&a,&b);
	add(a,b);
	getch();
}