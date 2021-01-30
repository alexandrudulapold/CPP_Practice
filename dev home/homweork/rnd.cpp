#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int a,b,c,x,y;
	a=rand()%20;
	b=rand()%20;
	c=rand()%20;
	x=rand()%15;
	y=rand()%15;
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<" x="<<x<<" y="<<y<<endl;
	srand(time(0));
	
	a<=0 ? ( b<c ? a=rand()%(c-b)+b : x<y ? a=rand()%(y-x)+x : a=1)  : a=2;
	b>0 ? b=pow(pow(a,2)+pow(b,3),4) : b=pow(c,2)-pow(a,3);
	c= c==0 ? x+y+1 : x+y-1;
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<" x="<<x<<" y="<<y<<endl;
	
	return 0;
}
