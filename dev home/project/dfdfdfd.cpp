#include<iostream>
using namespace std;

int main()
{

int a[]={1,2,3,4,5,6,7,8,9,0}; a[0]=(a[a[1]]+a[a[a[a[1]]]])+1;
cout<<a[0];	
	
	return 0;
}
