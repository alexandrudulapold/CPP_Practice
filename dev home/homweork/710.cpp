#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{

	srand(time(0));
	int n;
	cout<<"Enter n="; cin>>n;
	for(int i=0,a,b,c,h=0,j=0; i<n; i++)
	{
	
	a=1; b=1; c=1;
	
for(;a%2!=0;) {a=rand()%20;}
for(;b%2!=0;) {b=rand()%20;}	
for(;c%2!=0;) {c=rand()%20;}
	
	if(h<a+b-c) {h=a+b-c; j=i+1;}
	
	
	cout<<"\n"<<i+1<<" | a="<<a<<" b="<<b<<" c="<<c<<" | R="<<a+b-c<<endl;
	cout<<"Rezultatul maximal="<<h<<" | numarul iteratiei="<<j<<endl;
	}
	
	
	return 0;	
}
