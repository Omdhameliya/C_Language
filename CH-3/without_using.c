#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter Value A :");
	scanf("%d",&a);
	printf("Enter Value B :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("A : %d\n",a);
	printf("B : %d\n",b);
	getch();
}

