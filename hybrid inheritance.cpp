#include<iostream>
using namespace std;
class a{
	public:
		void A(){
			cout<<"Class A"<<endl;
		}
};
class b
{
	public:
		void B()
		{
		cout<<"Class B"<<endl;	
		}
};
class c:public b,public a
{
	public:
		void C()
		{
		cout<<"Class C"<<endl;	
		}
};
class d:public c
{
	public:
		void D()
		{
		cout<<"Class D"<<endl;	
		}
};
int main()
{
	d rz;
	rz.A();
	rz.B();
	rz.C();
	rz.D();
	}

