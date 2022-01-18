#include<stdio.h>
#include<string.h>
main()
{
	int i,k=0,count[26]={0},x;
	char str1[100];
	printf("enter the string");
	gets(str1);
	while(str1[k]!='\0')
	{
		if(str1[k]>='a' && str1[k]<='z')
		{
			x=str1[k]-'a';
			count[x]++;
		}
		else if(str1[k]>='A' && str1[k]<='Z')
		{
			x=str1[k]-'A';
			count[x]++;
		}
		k++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]!=0)
		printf("%c occured %d times \n",i+'a',count[i]);
	}
}
