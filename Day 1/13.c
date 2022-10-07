#include<stdio.h>
int fact(int a)
{
	int m=1,i;
	for(i=1;i<=a;i++)
	{
		m=m*i;
	}
	return m;
}
int main()
{
	int n,r,f,n1,sum=0;
	printf("Enter the Number :");
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		r=n1%10;
		f=fact(r);
		n1=n1/10;
		sum=sum+f;
	}
	if(sum==n)
	{
		printf("\n Number is Strong");
	}
	else
	{
		printf("\n Number is not Strong");
	}
	return 0;
}