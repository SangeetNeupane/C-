#include<iostream>
using namespace std;
class university
{
	public:         
	string ans;
	public:
	void question()
	{
		cout<<"Enter the name of University\n";
		cin>>ans;
		cout<<"The name of University is "<<ans;
		
	}
	
};
class college :public university
{
	public:
	void question()
	{
		cout<<"\nEnter the name of College\n";
		cin>>ans;
		cout<<"The name of College is "<<ans;
		
	}
};
class program :public university
{
	public:
	void question()
	{
		cout<<"\nEnter the name of Program\n";
		cin>>ans;
		cout<<"The name of program is "<<ans;
		
	}

};

int main(){
		university re;
		college k;
		program s;
		re.question();
		k.question();
		s.question();
		

	}



