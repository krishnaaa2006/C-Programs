 //enter 5 employe and display them
 struct emp
 {
	int eid;
	int ename[100];
	int salary;

 };
 void main()
 {
	struct emp x[5];
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter employe details\n");
		scanf("%d%s%d",&x[i].eid,x[i].ename,&x[i].salary);

	}
	printf("Display employe details\n");

	for(i=0;i<5;i++)
	{
		printf("%d %s %d",x[i].eid,x[i].ename,x[i].salary);
	}
	printf("Display only employe who have salary>5000\n");

	for(i=0;i<5;i++)
	{
		if(x[i].salary>5000)
		{
			printf("%d %s %d",x[i].eid,x[i].ename,x[i].salary);
		}
	}
	getch();
 }