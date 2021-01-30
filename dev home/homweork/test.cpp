#include <iostream>
using namespace std;
int main()
{
	
	int pivot = 5;
	for(int i=0; i<10; i++)
	{
		if(i==pivot) continue;
		cout<<i<<" "<<endl;
	}
	
	
	return 0;
}
