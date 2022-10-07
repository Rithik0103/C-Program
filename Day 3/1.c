#include<stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	printf("Enter A , B :");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	printf("\n sum = %d",*p+*q);
}
