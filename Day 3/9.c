#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,tot;
	float agg;
	printf("Enter marks 1 , 2 , 3 & 4 : ");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	tot=m1+m2+m3+m4;
	agg=tot/4;
	printf("Total = %d",tot);
	printf("\nAggregate = %f\n",agg);
	if(agg>=75)
	{
		printf("Distinction!!!");
	}
	else if(agg<75 && agg>=60)
	{
		printf("First Division");
	}
	else if(agg<60 && agg>=50)
	{
		printf("Second Division");
	}
	else if(agg<50 && agg>=40)
	{
		printf("Third Division");
	}
	else
	{
		printf("Fail!!!");
	}
	return 0;
}
