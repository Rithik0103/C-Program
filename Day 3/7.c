#include<stdio.h>
void swap(int *p,int *q,int *r)
{
	int t;
	t=*p;
	*p=*q;
	*q=*r;
	*r=t;
}
int main()
{
	int a,b,c;
	printf("Enter A , B & C : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nBefore swap");
	printf("\nA = %d\nB = %d\nC = %d",a,b,c);
	swap(&a,&b,&c);
	printf("\nAfter swap");
	printf("\nA = %d\nB = %d\nC = %d",a,b,c);
	return 0;
}
