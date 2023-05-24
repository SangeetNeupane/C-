 #include<iostream>
using namespace std;

class college
{
	
	public:
	 college(string name,int age,string address,string email,string phone)
	{
		
		cout<<"\n\n\n\nDetails of Given Student:\nName:- "<<name<<"\nAge:- "<<age<<"\nAddress:- "<<address<<"\nEmail:- "<<email<<"\nPhone:- "<<phone;
		
	}	
};
int main()
{
	
	int age;
	string email,name,address,phone;
	cout<<"Enter the Name , Age, Address, Email and Phone of Given Student:-\n";
	cin>>name>>age>>address>>email>>phone;
	college rz(name,age,address,email,phone);
	
}
