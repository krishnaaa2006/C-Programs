#include <stdio.h>
void main()
{
	int i,j,row;
	printf("Enter row\n");
	scanf("%d\n",&row);
	char q='A';
	char p='a';
	for(i=1;i<=row;i++)
	{

		for(j=1;j<=row;j++)
		{
			if(j%2==0)
			{
				printf(" %c ",q);
				
			}
			else
			{
				printf(" %c",p);
				
			}
			q++;
			p++;
		}
		p=p-3;
		q=q-3;
		printf("\n");
	}
	
}
