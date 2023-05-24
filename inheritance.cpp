#include<iostream>
using namespace std;
class cba{
	public:
	int a=56,b=81,sum1=0;
	public:
	void sum()
	{
		sum1=a+b;
		cout<<"\nAdd of two Number in abc class "<<sum1;
	}
	
};
class def :public cba{
	public:
	int sub=0;
	public:
	void difference()
	{
		sub=a-b;
		cout<<"\nDifference of two Number in def class "<<sub;
	}
};
class ghi :public def{
	public:
	int multi=0;
	public:
	void multiply() 
	{
		multi=a*b;
		cout<<"\nMultiply of two Number in ghi class "<<multi;
	}
};
class zxy :public ghi{
	public:
	int a=5,b=8,c=2,d=0;
	public:
	void arthimetic() 
	{
		d=a*b+c;
		cout<<"\nSimplify of  Numbers in xyz class "<<d;
	}
};

int main(){
		zxy rz;
		rz.sum();
		rz.difference();
		rz.multiply();
		rz.arthimetic();
		return 0;
		

	}



