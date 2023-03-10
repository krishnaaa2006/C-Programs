//given year is leap or not
#include <stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d/n",&year);
	
	if(year%4==0)
	{
		printf("%d is leap year");
		
	}
	else
	{
		printf("%d is not leap year/n");
	}
}
