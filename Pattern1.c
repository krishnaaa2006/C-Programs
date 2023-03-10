#include<stdio.h>

int main()
{
	int i,j,row;
	int num=1;
	
	printf("Enter num of rows\n");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		num=i;
		for(j=1;j<=row;j++)
		{
			printf("%d ",num);
			num++;
		
			
		}
		printf("\n");
		
		
		
	}
}
