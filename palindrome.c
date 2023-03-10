//palindrome numbers program

#include<stdio.h>

int main()
{
	int d,no,i,s=0;
	
	printf("Enter a NUmber\n");
	scanf("%d",&no);
	
	while(no!=0)
	{
		d=no%10;
		no=no/10;
		s=s*10+d;
	}
	printf("%d",s);
}
