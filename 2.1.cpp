#include <iostream>
#include <cmath>	
using namespace std;
int main()
{
	int a,p,answer;
	cout<<"enter num : ";
	cin>>a;
	cout<<"degree of number(1;5) : ";
	cin>>p;
	switch(p)
	{
	case (1):
	answer=pow(a,1);
	break;
	case (2):
	answer=pow(a,2);
	break;
	case (3):
	answer=pow(a,3);
	break;
	case (4):
	answer=pow(a,4);
	break;
	case (5):
	answer=pow(a,5);
	break;



	}

	cout<<"answer :"<<answer<<'\n';

	
	return 0;
}	
