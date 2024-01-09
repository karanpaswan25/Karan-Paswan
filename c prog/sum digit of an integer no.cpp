#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,s=0;
	printf("enter any number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("result=%d",s);
	return 0;
}
