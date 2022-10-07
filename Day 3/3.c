#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n,i;
	printf("Enter limit :");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("Enter Elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=1;i<n;i++)
	{
		if(*p<*(p+i))
		{
			*p=*(p+i);
		}
	}
	printf("Largest Element = %d",*p);
	return 0;
}
