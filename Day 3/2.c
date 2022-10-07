#include<stdio.h>
int main()
{
	int a,b,big;
	int *p,*q;
	printf("Enter A & B :");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	if(*p>*q)
	{
		big=*p;
	}
	else
	{
		big=*q;
	}
	printf("Biggest = %d",big);
}
