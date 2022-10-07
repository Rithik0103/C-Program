#include<stdio.h>
int main()
{
	int m,n,i,a;
	printf("Enter M :");
	scanf("%d",&m);
	printf("Enter N :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=m*i;
		printf("\n%d x %d = %d",m,i,a);
	}
}