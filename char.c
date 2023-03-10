#include<stdio.h>


int main()
{
		int no;
		
		printf("Enter a number\n");
		scanf("%d",&no);
		
		word(no);
		return 0;
}
int word(int no)
{
	
	int n[4]={10000000,100000,1000,100};
	char r[20][30]={" ","one","two","three","four","five","six"," seven","Eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","Eighteen","nineteen"};
	char d[10][30]={" "," ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	char m[4][30]={"crore","lakhs","thousands","hundred"};
	int i=0,a,b,s,p;
	char S[500]=" ";		
	
	
	
	
	
	while(no!=0)
	{
	if(no<100)
	{
		
			if(no>20)
			{
					Strcat(s,r[no]);
			}
			else
			{
					a=no/10;
					b=no%10;
					Strcat(s,d[a]);
					Strcat(s,r[b]);
			}
			no=0;
	}
	else
	{
		p=no/n[i];
		no=no%n[i];]
	
	if(p!=0)
	{	
		if(p<20)
		{
			Strcat(s,r[p]);
			Strcat(s,m[i]);
			
		}
		else
		{
			a=p/10;
			b=p%10;
			Strcat(s,d[a]);
			Strcat(s,r[b]);
			strcat(s,m[i]);
			
		}
	}
	i++;
	}
}
printf("%s",s);

}
