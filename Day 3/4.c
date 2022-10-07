#include<stdio.h>
#include<string.h>
int main()
{
	int cnt=0;
	char s[20];
	char *p;
	printf("Enter the string :");
	scanf("%s",&s);
	p=s;
	while(*p!='\0')
	{
		cnt++;
		p++;
	}
	printf("Length of the string = %d",cnt);
	return 0;
}
