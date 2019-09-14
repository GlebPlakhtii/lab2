#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"enter num a : ";
	cin>>a;
	cout<<"enter num b : ";
	cin>>b;
	cout<<"enter num c : ";
	cin>>c;
	int min = a;
	if (b<a && b<c){

		min=b;
	}
	else if  (c<a && c<b){

		min=c;


	}
	if(a==b && a==c){

		cout<<"a==b==c\n";

	}

	else{
	cout<<"min = "<<min<<'\n';
	
	}

	
	return 0;
}
