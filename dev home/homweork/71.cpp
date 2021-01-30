#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(0));
	
	int a,b,c,x,R=a+b-c;
	
	cout<<" Press \'1\' to insert the variables manually.\n Press \'2\' and the variables will be inserted randomly.\n Press enter after choosing."<<endl;
	cin>>x;
	
	system("cls");
	
	if( x==1 )
	{
		cout<<" Insert a,b,c through enter:"<<endl;
		cin>>a>>b>>c;
		R=a+b-c	;
	}
	else if( x==2 )
	{
		a=rand()%20, b=rand()%20, c=rand()%20;
		R=a+b-c;
	}
	else
	{
		cout<<"Invalid character\n\n"<<endl;
	}

	cout<<" a="<<a<<" b="<<b<<" c="<<c<<"\t R=a+b-c="<<R<<endl;
	
	if( R %2 == 0 && R>=10 && R<50 )
	{
		a=rand()%11+66;
		b=rand()%11+66;
		c=rand()%11+66;
		R=a+b-c;
	}
	
	
	
	cout<<"\n a="<<a<<" b="<<b<<" c="<<c<<"\t R=a+b-c="<<R<<endl;
	
	
	
	return 0;
}

