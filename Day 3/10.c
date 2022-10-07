#include<stdio.h>
int minmax(int a[],int n)
{
	int min,max,i;
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
	printf("\nMinimum = %d",min);
	printf("\nMaximum = %d",max);
}
int main()
{
	int n,i;
	int a[n];
	printf("Enter limit :");
	scanf("%d",&n);
	printf("Enter Elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	minmax(a,n);
}
