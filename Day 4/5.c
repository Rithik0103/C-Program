#include<stdio.h>
union stu
{
	int reg;
	char name[30];
	int mark;
};
int main()
{
	int i,n;
	union stu s[10];
	printf("Enter no. of students :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name :");
		scanf("%s",s[i].name);
		printf("Enter RegNo :");
		scanf("%d",&s[i].reg);
		printf("Enter Mark :");
		scanf("%d",&s[i].mark);
	}
	for(i=0;i<n;i++)
	{
		printf("\nName : %s",s[i].name);
		printf("\nReg No : %d",s[i].reg);
		printf("\nMark = %d",s[i].mark);
	}
	return 0;
}
