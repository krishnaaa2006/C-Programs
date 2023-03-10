void main()
{
	int i;
	char s[100];
	clrscr();
	printf("enter a string \n");
	gets(s);

	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}

	}

	printf("capital string=%s",s);
	getch();
}