#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,ron,n;
	char name[30];
	FILE *fptr;
	fptr=fopen("C:\\Users\\rithik\\Desktop\\p.txt","w");
	if(fptr==NULL)
	{
		printf("ERROR");
		exit(1);
	}
	printf("Enter no. of students :");
	scanf("%d",&n);
	printf("Enter Student Details :-\n");
	for(i=1;i<=n;i++)
	{
		printf("\nStudent %d Detail :\n",i);
		printf("Enter Name :");
		scanf("%s",&name);
		printf("Enter RollNo :");
		scanf("%d",&ron);
	}
	fprintf(fptr,"Student Deatils :-\n");
	for(i=1;i<=n;i++)
	{
		fprintf(fptr,"\nStdent %d Detail :",i);
		fprintf(fptr,"\nName : %s\n",name);
		fprintf(fptr,"Roll No : %d\n",ron);
	}
	fclose(fptr);
	return 0;
}
