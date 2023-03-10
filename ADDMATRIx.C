#include<iostream>
using namespace std;

int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n;
	
	printf("Enter m and n \n");
	scanf("%d%d",&m,&n);

	printf("Enter matrix A\n");

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{

			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix of B\n");

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{

			scanf("%d",&b[i][j]);
		}
	}

	printf("display a matrix of A\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Display matrix B\n");
	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{

			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{

			c[i][j]=(a[i][j]+b[i][j]);

		}
	}
	printf("Display matrix addition\n");
	for(i=0;i<m;i++)
	{

		for(j=0;j<n;j++)
		{

			printf("%d ",c[i][j] );
		}
		printf("\n");
	}
	
}
