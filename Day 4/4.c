#include<stdio.h>
struct std
{
	char name[20];
	int ron;
	int m1,m2,m3;
	int sum;
	float per;
};
int main()
{
	struct std s1;
	printf("Enter student details : name,roll no,m1,m2,m3 \n");
	scanf("%s%d%d%d%d",&s1.name,&s1.ron,&s1.m1,&s1.m2,&s1.m3);
	s1.sum=s1.m1+s1.m2+s1.m3;
	s1.per=s1.sum/3;
	
	printf("\nStudent Details :\n");
	printf("\nName : %s",s1.name);
	printf("\nRoll no : %d",s1.ron);
	printf("\nMark 1 : %d",s1.m1);
	printf("\nMark 2 : %d",s1.m2);
	printf("\nMark 3 : %d",s1.m3);
	printf("\nSum = %d",s1.sum);
	printf("\nPercent = %f %",s1.per);
	return 0;
}
