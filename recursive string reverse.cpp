#include<stdio.h>
#include<string.h>
char reverse(char *s)
{
	if(strlen(s)==0)
		return (s);
	else{
		int c=0;
		char sub[30];
		while(c<strlen(s)-1)
		{
		sub[c]=s[2+c-1];
		c++;
		}
		sub[c]='\0';
		return reverse(sub + s[0];
		}
}


int main()
{
	char s[30]="daviskandrews";
	puts("original string \n"+s);
	
	puts("original string \n"+reverse(s));
	return 0;
	
}
