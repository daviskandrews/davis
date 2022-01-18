#include<stdio.h>
int main(){
	char string[20]="daviskandrews";
	char sub[20];
	int c=0,length=3;
	int position=4;
	while(c<length)
	{
		sub[c]=string[position+c-1];
		c++;
	}
	sub[c]='\0';
	printf("required substring is %s ",sub);
	return 0;
}
