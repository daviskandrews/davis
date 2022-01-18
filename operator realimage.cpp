#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,image;
	public:
		Complex(int r=0, int i=0) { real=r; image=i; }
		Complex operator + (Complex const &object)
		{
			Complex res;
			res.real=real + object.real;
			res.image=image * object.image;
			return res;
		}
		void print(){ cout<<real<<"+i"<<image<<endl;		}
};

int main()
{
	Complex	c1(10,5),c2(15,20);
	Complex c3=c1+c2;
	c3.print();
}
