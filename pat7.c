#include<stdio.h>

int main()
{
	
	int i,j;
	int num=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j%2==1)
			{
				printf("%d ",num*num);	
				num++;
			}
			else
			{
				printf("%d ",num);
				num++;
			}
		}
		printf("\n");
		
	}
}
