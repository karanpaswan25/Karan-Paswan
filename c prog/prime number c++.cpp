#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter any number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	if(n%i==0)
	{
		printf("numer is not prime");
		break;
	}
	if(n==i)
	printf("number is prime");
	return 0;
	
	
	

}
