//compare two string

void main()
{
	char s[100],r[100];
	int i,j,l1,l2,flag=0;
	clrscr();
	printf("Enter a first string\n");
	gets(s);
	printf("Enter a second string\n");
	gets(r);

	l1=strlen(s);
	l2=strlen(r);

	if(l1!=l2)
	{
		printf("not equal");

	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(s[i]!=r[i])
			{
				flag=1;
				break;
			}
		}
       }if(flag==0)
	{
		printf("is equal\n");

	}
	else
	{
		printf("is not equal");

	}
	getch();
}