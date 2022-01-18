#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
	int person=100;
	int i;
	vector<int> a(person);
	for(i=0;i<person;i++)
	{
		a[i]=i+1;
		
	}
	int pos=0;
	while(a.size()>1){
		pos++;
		pos=pos%a.size();
		cout<<"\n"<<pos;
		a.erase(a.begin()+pos);
		
	}
	cout<<a[0];
	return 0;
}
