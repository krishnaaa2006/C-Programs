#include <stdio.h>
void main()
{
	int i,j,row;
	char q='a';
	printf("Enter row\n");
	scanf("%d\n",&row);
	char p='A';
	for(i=1;i<=row;i++)
	{

		for(j=1;j<=row;j++)
		{
			if(j%2==0)
			{
				printf(" %c ",q);
				q++;
			}
			else
			{
				printf(" %c",p);
				p++;
			}
		}
		printf("\n");
	}
	
}
