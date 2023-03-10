#include <stdio.h>
void main()
{
	int i,j,row,p;
	printf("Enter row\n");
	scanf("%d\n",&row);
	
	for(i=1;i<=row;i++)
	{
		p=1;
		for(j=1;j<=row;j++)
		{
			
			
				printf("%d ",p);
				p=p+i;
				
			
		}
		printf("\n");
	}
}
