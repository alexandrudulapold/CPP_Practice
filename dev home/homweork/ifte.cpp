#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	int a,b,c;
	a=rand()%100-50;
	b=rand()%100-50;
	c=rand()%100-50;
	
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
	
	if( a>0 && a<c ) 
	{
	a=rand()%3+15;
	}
	if( b>100 && c<100 )
	{
		b=rand()%8+3;
	}
	if( c>0 )
	{
		c=a;
	}
	else if(c==0)
	{
		c=b;	
	}
	else
	{
		c=0;
	}
	
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
	
	return 0;
}


