//enter no.print even or odd 39
#include<stdio.h>
int main()
{
	int no;
	
	printf("Enter no\n");
	scanf("%d",&no);
	if(no%2==1)
	{
		printf("%d is odd",no);
	}
	else
	{
		printf("%d is even",no);
	}
	
}
