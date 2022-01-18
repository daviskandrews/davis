#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* substr( const char *string,int sp,int len)
{
	int leng=len-sp;
	char *dest = (char*)malloc(sizeof(char)*(len+1));
	puts(dest);
	for(int i=sp;i<len && (*(string+i)!= '\0');i++)
	{
		*dest=*(string+i);
		dest++;
	}
	*dest='\0';
	return dest-len;
}
int main(){
	char string[20]="daviskandrews";
	
	puts(substr(string,1,strlen(string)));
	return 0;
}


