#include<iostream>
using namespace std;
 class demo {
		public:
	void sum(int a,int b)          
	{
		int c=a+b;
		cout<<"Sum (void sum(int 1,int 2 )) = "<<c;
	}
		public:
	int sum(int a,int b,int d)
	{
		int c=a+b+d;
		return c;
	}
		public:
    float sum(int a,float b)
    {
    	float c=a+b;
    	return c;
    }
    	public:
    float sum(float a,float b)
    {
    	float c=a+b;
    	return c;
    }
    	public:
    float sum(float a,int b)
    {
    	float c=a+b;
    	return c;
    }};
    
   int main()
    {
    	int e, f, g;
		float h, i;
    	cout<<"Enter the number : ";
    	cin>>e>>f>>g>>h>>i;
		demo rz;
    	rz.sum(e,f);
    	int x=rz.sum(e,f,g);
		cout<<"\nSum (int sum(int 1,int 2,int 3)) = " <<x;
		int y=rz.sum(e,h);
    	cout<<"\nSum ( float sum(int 1,float 4)) = "<<y;
    	int w=rz.sum(h,i);
    	cout<<"\nSum (float sum(float 4,float 5)) = "<<w;
    	int z=rz.sum(h,g);
    	cout<<"\nSum ( float sum(float 4,int 3))= " <<z;
    }

