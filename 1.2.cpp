#include <iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"enter num a : ";
	cin>>a;
	cout<<"enter num b : ";
	cin>>b;
	int min = a;
	if (b<a){

		min=b;
	}
	if (b==a){

		cout<<"a==b\n";
	}
	else{
	cout<<"min = "<<min<<'\n';
	}


	
	return 0;
}
