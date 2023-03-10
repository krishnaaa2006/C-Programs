 void main()
 {
	char s[100],r[100];
	int i;
	clrscr();
	printf("Enter a string\n");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		r[i]=s[i];
	}
	r[i]='\0';
	printf("copy string=%s",r);
	getch();
 }