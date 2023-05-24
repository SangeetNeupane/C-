#include<iostream>
using namespace std;

class calcu
{
	private:
	int c;
	public:
	 int check(int a,int b)
	{
		if(a==b)
		{
			cout<<"Given Shape is Square.";
			return 0;
		}
		else{
			cout<<"Given Shape is Rectangle.";
			return 1;
		}
		
	}
	void square(int l)
	{
		int sq=l*l;
		cout<<"\nThe area of given Square is:"<<sq;
	}
	void rectangle(int l,int b)
	{
		int rec=b*l;
		cout<<"\nThe area of given Rectangle is:"<<rec;
	}	
};
int main()
{ 
	
	int l,b;
	cout<<"Enter the length and breadth :-\n";
	cin>>l>>b;
	calcu rz;
	int a=rz.check(l,b);
	if(a==0)
	{
		rz.square(l);
	}
	else
	{
		rz.rectangle(l,b);
	}
	
}
