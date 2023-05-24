#include<iostream>
using namespace std;

class sum
{
	private:
	int c;
	public:
	 sum(int a,int b)
	{
		c=a+b;
		cout<<"The sum of "<<a<<" and "<<b<<" is "<<c;
		
	}	
};
int main()
{
	
	int a,b;
	cout<<"Enter the two Number:-";
	cin>>a>>b;
	sum rz(a,b);
	
}
