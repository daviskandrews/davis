#include<stdio.h>
#include<math.h>
int main()
{
	int choice;
	printf("enter \n1 for triangle\n2 for square\n3 for circle\n4 for rectangle\n5 for parallellogam \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				int a,b,c;
				float s,area;
				printf("enter the side of the triangle\n");
				scanf("%d %d %d",&a,&b,&c);
				s=(a+b+c)/2;
				area=(sqrt(s*(s-a)*(s-b)*(s-c)));
				printf("the are of the triangle with side %d,%d,%d is %f\n",a,b,c,area);
				break;
			}
		case 2:
			{
				float side,area;
				printf("enter the side of the square\n");
				scanf("%f",&side);
				area=side*side;
				printf("the are of the square is %f\n",area);
				break;
			}
		case 3:
			{
				float radius,area;
				printf("enter the radius of the circle\n");
				scanf("%f",&radius);
				area=3.14*radius*radius;
				printf("the are of the circle with radius %.2f is %.2f\n",radius,area);
				break;
			}
		case 4:
			{
				float length,breadth,area;
				printf("enter the length and breadth of the rectangle\n");
				scanf("%f %f",&length,&breadth);
				area=length*breadth;
				printf("the are of the rectangle is %f\n",area);
				break;
			}
		case 5:
			{
				float base,height,area;
				printf("enter the base and height of the rectangle\n");
				scanf("%f %f",&base,&height);
				area=base*height;
				printf("the are of the rectangle is %f\n",area);
				break;
			}
		default:
			{
			printf("invalid choice\n");
			break;	
			}
				
	}
	
}
