#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<cctype>

using namespace std;

int main()
{
	srand(time(0));
	int a,b,c,n,i=0,a1=0,b1=0,c1=0,x=2,y=15;
	
	E:
	
	a=rand()%2;
	
	B:
	
	b=rand()%10;
	
	if( b%2==0 ) goto B;
	
	c=rand()%(y-x)+x;
	
	if( a==1 ) a=rand()%10+10;
	else       a=rand()%20+50;
	
	
	cout<<i<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
	
	n=rand()%5+10;
	
	if( a%2==0 && a>=0 && a<6 ) a1++;
	if( b%2==0 && b>=0 && b<6 ) b1++;
	if( c%2==0 && c>=0 && c<6 ) c1++;
	
	i++;
			
	if( i<n ) goto E;	
	cout<<"\n\n a1="<<a1<<"\t b1="<<b1<<"\t c1="<<c1<<endl;
	
	return 0;
}




