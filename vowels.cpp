#include<stdio.h>
#include<string.h>
main()
{
	int i,vowels=0,consonants=0,special=0,digits=0,letters=0;
	char str[100];
	printf("\n enter the string");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if( str[i]=='A'|| str[i]=='a' || str[i]=='E'|| str[i]=='e' ||str[i]=='I'|| str[i]=='i' ||str[i]=='O'|| str[i]=='o' ||str[i]=='U'|| str[i]=='u')
		{
			vowels++;
		}
		else if( str[i]>=0&&str[i]<=47  || str[i]>=58&&str[i]<=64 || str[i]>=91&&str[i]<=96 || str[i]>=123&&str[i]<=127)
		{
			special++;
		}
		else if( str[i]>'0' &&str[i]<='9' )
		{
			digits++;
		}
	}
	printf("\n vowels count = %d \n",vowels);
	printf("\n consonants count = %d \n",strlen(str)-vowels-special-digits);
	printf("\n digits count = %d \n",digits);
	printf("\n special charecters count = %d \n",special);
}
