#include<iostream>
using namespace std;
class count{
	private:
		int value;
	public:
		count() : value(5){}
		void operator ++ (){
			++value;
		}
		
		void operator -- (){
			value=value*value;
		}
		
		void operator & (){
			value=4&value;
		}
		
		void display()
		{
			cout<<"count is "<<value<<endl;
		}
};


int main()
{
	count count1;
	++count1;
	count1.display();
	
	count count2;
	--count2;
	count2.display();
	
	count count3;
	&count3;
	count3.display();
	
	return 0;
}
