#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	int a=rand()%20,b=rand()%20,x=rand()%20;
	cout<<" a="<<a<<" b="<<b<<" x="<<x<<endl;
	
	double R1=abs( a*pow(b,2)-sin(x) );
	cout<<" R1="<<R1<<endl;
	double R2=sqrt( cos(a)+sin(b) );
	cout<<" R2="<<R2<<endl;
	
	double I=R1/R2;
	cout<<" I="<<I<<endl;
	
	return 0;
}





