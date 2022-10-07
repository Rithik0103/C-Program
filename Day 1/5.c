#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age<1)
	{
		printf("Invalid input...");
	}
	else if(age>=18)
	{
		printf("You are elligible to vote");
	}
	else if(age<18 && age>0)
	{
		printf("not elligiblie to vote");
	}
	return 0;
}