#include<stdio.h>
struct book
{
	char ti[20];
	char au[20];
	char sub[20];
	int id;
};
int main()
{
	struct book b[10];
	int i,n;
	printf("Enter no. of books :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter details for book %d :\n",i+1);
		printf("\nEnter Title of book %d :",i+1);
		scanf("%s",&b[i].ti);
		printf("Enter Author of book %d :",i+1);
		scanf("%s",&b[i].au);
		printf("Enter Subject of book %d :",i+1);
		scanf("%s",&b[i].sub);
		printf("Enter Id of book %d :",i+1);
		scanf("%d",&b[i].id);		
	}
	for(i=0;i<n;i++)
	{
		printf("\nDetail of book %d :\n",i+1);
		printf("\nBook %d Title : %s",i+1,b[i].ti);
		printf("\nBook %d Author : %s",i+1,b[i].au);
		printf("\nBook %d Subject : %s",i+1,b[i].sub);
		printf("\nBook %d book_id : %d\n",i+1,b[i].id);
	}
	return 0;
}
