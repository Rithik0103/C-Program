#include<stdio.h>
int main()
{
	int n,i;
	int *p;
	int a[n];
	printf("Enter limit : ");
	scanf("%d",&n);
	printf("Enter elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("Array Elements = ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(p+i));
	}
	return 0;
}
