#include <iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"\t1 - greeting \n\t2 - invitation to work on computer \n\t3 - invitation to quit : ";
	cin>>a;


	switch(a)
	{
		case(1):
		cout<<"\thello \n";
		break;
		
		case(2):
		cout<<"\twelcome to work\n";
		break;

		case(3):
		cout<<"\tcompletion of work\n";

		break;


	}
	
	


	
	return 0;
}
