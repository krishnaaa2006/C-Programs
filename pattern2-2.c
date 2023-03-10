#include <stdio.h>
void main()
{
	int i,j,row,p;
	printf("enter row\n");
	scanf("%d\n",&row);
   for(i=1;i<=row;i++)
   {
   	p=3;
   	char q='a';
   		for(j=1;j<=row;j++)
   		{
   			if(i%2!=0)
   			{
				if(j%2!=0)
				{
					printf(" %d ",p);
				}
				else
				{
					printf(" %c ",q);
				}
			}
			else
			{
				if(j%2==1)
				{
					printf(" %c ",q);
				}
				else
				{
					printf(" %d ",p);
				
				}
				
			}
			p--;
			q++;
			
		}
		printf("\n");
   }
}
