void main()
{
 float r,l,b,a;
 int ch;
 clrscr();
 printf("1.cricle\n");
 printf("2.Rectangle\n");
 printf("3.Triamgle\n");
 printf("4,square\n");
 printf("Enter your choice");
 scanf("%d",ch);

 switch(ch)
 {
	case 1:
		printf("Enter the radius);
		a=3.14*r*r;
		printf("Area of circle is %f",a);
		break;
	case 2:
		printf("Enter the l and b");
		a=l*b;
		printf("Area of Rectangle is %f",a);
		break;
	case 3:
		printf("Enter l and b\n");
		a=0.5*l*b;
		printf("Area of triangle is %f",a);
		break;
	case 4:
		printf("Enter the l);
		a=l*l;
		printf("Area of square is %f",a);
		break;

	default:
		printf("Invalid choice);
	}
	getch();
 }

