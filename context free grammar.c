#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,flag=1;
	printf("Enter string:");
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!='0'&& s[i]!='1')
		{
			flag=0;
		}
	}
	if(flag!=1)
	printf("string is not valid");
	if(flag==1)
	{
		if(s[0]=='0'&& s[l-1]=='1')
		printf("String is accepted");
		else
		printf("string is not accepted");
	}
}
