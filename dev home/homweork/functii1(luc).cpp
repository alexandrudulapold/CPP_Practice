#include<iostream> 
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;

int atr()
{
	int x;
	cin>>x;
	return x;
}

int clc(int ax, int bx, int cx)
{
	return ax+bx-cx;
}

void coutf(int Rx)
{
	cout<<Rx;
}

int main()
{ 
int a, b, c, R;

cout<<"Enter a=";
a=atr();
system("cls");
cout<<"Enter b=";
b=atr();
system("cls");
cout<<"Enter c=";
c=atr();
system("cls");

R=clc(a, b, c);

cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
cout<<"a+b-c="; coutf(R);

return 0;
}

