// concate of two string

void main()
{
	char s[100],r[100];
	int i,j;
	clrscr();
	printf("Enter a string \n");
	gets(s);

	printf("ENter a second string\n");
	gets(r);

	i=strlen(s);

	for(j=0;j<=strlen(r);j++)
	{
		s[i]=r[i];
		i++;
	}
	s[i]='\0';
	printf("concate string=%s",s);
	getch();
}