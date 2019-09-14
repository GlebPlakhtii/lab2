#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	
      int tmp;                                                       
	for (int i=100; i<1000; i++)
	{
		tmp=i/10;
		if (pow(i%100,3)+pow(tmp%10,3)+pow(tmp/10,3) == i  )
		{
			cout<<i<<endl;
		}
		

		
	}

	

	
	


	
	return 0;
}
