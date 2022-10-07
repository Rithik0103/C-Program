#include<stdio.h>
int main()
{
	int y;
	printf("Enter year :");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a Leap Year");
	}
	return 0;
}