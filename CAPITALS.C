void main()
{
	char s[100];
	int i;
	clrscr();
	printf("enter a string\n");
	gets(s);

	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	printf("capital=%s",s);
	getch();
}