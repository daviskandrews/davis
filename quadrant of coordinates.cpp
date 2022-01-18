#include<stdio.h>
main()
{
	float x,y;
	printf("enter x and y coordinates \n");
	scanf("%f%f",&x,&y);
	if( x>0 && y>0)
	{
		printf("co-ordinates (%f,%f) lies in the first quadrant ",x,y);
	}
	if( x<0 && y>0)
	{
		printf("co-ordinates (%f,%f) lies in the second quadrant ",x,y);
	}
	if( x<0 && y<0)
	{
		printf("co-ordinates (%f,%f) lies in the third quadrant ",x,y);
	}
	if( x>0 && y<0)
	{
		printf("co-ordinates (%f,%f) lies in the fourth quadrant ",x,y);
	}
	if( x==0 && y==0)
	{
		printf("co-ordinates (%f,%f) lies in the origin ",x,y);
	}
	
}
