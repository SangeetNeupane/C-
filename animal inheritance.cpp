#include<iostream>
using namespace std;
class animal{
	public:
	void ani()
	{
		
		cout<<"\nI am Animal.";
	}
	
};
class Dog :public animal{
	
	public:
	void dog()
	{
		cout<<"\nI am Dog.";	
	}
};
class german_sheferd :public Dog{
	
	public:
	void german() 
	{
		cout<<"\nI am German Shepherd";
	}
};


int main(){
		german_sheferd rz;
		rz.ani();
		rz.dog();
		rz.german();
		
		

	}



