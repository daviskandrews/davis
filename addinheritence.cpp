#include<iostream>
using namespace std;
class A
{ 
int a,b;
public:
	void add(int x,int y)
	{
		a=x;
		y=b;
		cout<<a+b<<endl;
	}
};

class B:public A
{
public:
	void print(int x,int y)
	{
		add(x,y);
	}
};
int main()
{

B b;
b.print(7,8);
return 0; 
	
}
