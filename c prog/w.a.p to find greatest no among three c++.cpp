#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c;
	printf("enter any elements");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is max",a);
		else
		printf("%d is max",b);
	}
	else
	{
		if(b>c)
		printf("%d is max",b);
		else
		printf("%d is max",c);
		
	}
	getch();
}


