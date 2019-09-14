#include <iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"enter num : ";
	cin>>a;
	int answer=0;
	
	

	if (a>0)
	{
		answer=3*a;

	}
	else if(a<0)
	{
		answer=a*a;
	}

	if (a==0)
	{

		cout<<"enter correct num ";
	}
	else 
	{
		cout<<"answer : "<<answer<<'\n';
	}






	
	return 0;
}
