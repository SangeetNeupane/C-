#include<iostream>
using namespace std;

class sum
{
	public:
	int c;
	int add(int a,int b)
	{
		c=a+b;
		return c;
	}	
};
int main()
{
	sum rz;
	int a,b;
	cout<<"Enter the two Number:-";
	cin>>a>>b;
	int  c=rz.add(a,b);
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<c;
}
