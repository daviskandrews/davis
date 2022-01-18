#include<bits/stdc++.h>
using namespace std;
class number
{
	public:
		void num(int x)
		{
			cout<<"\nthe value of the number is "<<x;
		}
		
		void num(char c)
		{
			cout<<"\nthe value of charecter is "<<c;
		}
		void num(double f)
		{
			cout<<"\n the value of the double is "<<f;
		}
};

int main()
{
	number object;
	object.num(3);
	object.num('a');
	object.num(4.0);
	return 0;
}
