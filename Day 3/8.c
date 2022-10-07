#include<stdio.h>
int factorial(int n,int *fact)
{
	int i;
	*fact=1;
	for(i=1;i<=n;i++)
	{
		*fact=*fact*i;
	}
	return *fact;
}
int main()
{
	int n,fact;
	printf("Enter a Number :");
	scanf("%d",&n);
	factorial(n,&fact);
	printf("Factorial = %d",fact);
	return 0;
}
	
