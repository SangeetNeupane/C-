#include<iostream>
using namespace std;
class reeja{
	public:
	void Father()
	{
		cout<<"\n Father Name:- Ravindra Khadgi ";
		
	}
};
class reeza{
	public:
	void mother()
	{
		cout<<"\n Mother Name:- Urmila Khadgi ";
		
	}
};
class parent:public reeza,public reeja
 {
 	public:
	void Father()
	{
		cout<<"\n Father Name:- Ravindra Khadgi ";
		
	}
};
int main(){
		parent rz;
		rz.Father();
		rz.mother();
		return 0;
		

	}



