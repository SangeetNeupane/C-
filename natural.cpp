#include<iostream>
using namespace std;

class natural
{
	
	int i=1;
	int sum;
	public:
	 void natu()
	{
		cout<<"Sum of natural number upto 10:- ";
		for(i=1;i<=10;i++)
		{
			//cout<<i<<"\n";
			sum=sum+i;
		}
		cout<<sum;
	}	
};
int main()
{
	natural rz;
	rz.natu();
	
	
	
}
