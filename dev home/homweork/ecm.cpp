#include<iostream>
using namespace std;
int main()
{
	int a=15,b=5,c=10;
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
	int r1=a+b-c;
	cout<<"a+b-c="<<r1<<endl;
	int r2=b/c;
	cout<<"b/c="<<r2<<endl;
	int r3=r2/a;
	cout<<"r2/a="<<r3<<endl;
	int r4=a/c;
	cout<<"a/c="<<r4<<endl;
	int r5=r3+r4;
	cout<<"r3+r4="<<r5<<endl;
	int r6=r1/r5;
	cout<<"r1/r5="<<r6<<endl;
	int r7=a/b;
	cout<<"a/b="<<r7<<endl;
	int r8=r6+r7;
	cout<<"r6+r7="<<r8<<endl;
	int R=r8-c;
	cout<<"r8-c="<<R<<endl;
	cout<<"R="<<R<<endl;
	return 0;
}
