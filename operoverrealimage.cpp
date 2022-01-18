#include<iostream>
using namespace std;
class complex{
	private:
		int real,image;
	public:
		complex(int r=0,int i=0) { 		real=r;image=i; }
		complex operator + (complex const &object)
		{
			complex res;
			res.real=real+object.real;
			res.image=image+object.image;
			return res;
		}
		print(){cout<<real<<"+i"<<image<<endl;		}
};

int main()
{
	complex c1(10,2),c2(3,4);
	complex c3=c2+c1;
	c3.print();
}
