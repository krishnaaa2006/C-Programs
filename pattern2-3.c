#include <stdio.h>
void main()
{
	int i,j,row,p=4;
	
	
	printf("Enter row:\n");
	scanf("%d\n",&row);
	
	for(i=1;i<=row;i++)
	{
		p=4;
		char q='a';
		for(j=1;j<=row;j++)
		{
			if(j%2!=0)
			{
				printf(" %d ",p);
				p--;
			}
			else
			{
				printf(" %c ",q);
				q++;
			}
			
			
		}
		printf("\n");
	}
}
