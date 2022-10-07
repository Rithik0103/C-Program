#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n%d is divisible by 2\n",n);
		printf("It is Even Number");
	}
	else
	{
		printf("\n%d is not divisible by 2\n",n);
		printf("It is Odd Number");
	}
	return 0;
}