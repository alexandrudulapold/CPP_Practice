#include<iostream> 
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;

int main()
{ 

int *pa = new int;
int *pb = new int;
int *pc = new int;
int *pn = new int;
int *r = new int;
int *cp = new int;
int *cn = new int;
int *tmp = new int;
int *clv = new int;
*cp=0, *cn=0, *clv=13;
cout<<" Enter n=";
cin>>*pn;
int V[*pn];

for(int i=0; i<*pn; i++)
{
*pa=rand()%6;
*pb=rand()%6;
*pc=rand()%6;
	V[i]=*pa+*pb-*pc;
	cout<<" a="<<*pa<<" b="<<*pb<<" c="<<*pc<<"\n a+b-c="<<*pa+*pb-*pc<<endl;
}

cout<<endl;
for(int i=0; i<*pn; i++)
{
	cout<<"V["<<i<<"]="<<V[i]<<endl;
}

for(int i=0; i<*pn; i++)
{
	if(V[i]>=0) { *cp+=1; }
	else { *cn+=1; }
}
cout<<"\nRezultate pozitive="<<*cp<<endl;
cout<<"Rezultate negative="<<*cn<<endl;

*tmp=V[0];
V[0]=V[*pn-1];
V[*pn-1]=*tmp;
cout<<endl;
for(int i=0; i<*pn; i++)
{
	cout<<"V["<<i<<"]="<<V[i]<<endl;
}

for(int i=0; i<*pn; i++)
{
	if(V[i]<*clv) { *clv=V[i]; }
}
cout<<"\nCea mai mica valoare"<<*clv<<endl;

return 0;
}
