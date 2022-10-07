#include<stdio.h>
int add(int *p,int *q)
{
	int s;
	s=*p+*q;
	return s;
};
int main()
{
	int a,b,sum;
	printf("Enter A & B : ");
	scanf("%d%d",&a,&b);
	sum=add(&a,&b);
	printf("Sum = %d",sum);
	return 0;
}
