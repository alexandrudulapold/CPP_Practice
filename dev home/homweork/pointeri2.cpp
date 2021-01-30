#include<iostream> 
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;

int main()
{ 
int *n = new int;
cout<<" Enter n="; cin>>*n;
int V[*n];
  
for(int i=0; i<*n; i++)
{
	V[i]=rand()%15;
	cout<<"V["<<i<<"]="<<V[i]<<endl;
}

int *k = new int;
int *x = new int;
bool *z = new bool;cout<<"\n Enter z="; cin>>*z;
int Vmax[*z];
int *max = new int; 

while(*k<=*z)
{ *max=-1;
for(int i=0; i<*n; i++)
{
	if(*max<V[i])
	{
		z=0;
		for(int j=0; j<*n; j++)
		{if(Vmax[j]==1) { *x=1; break; }}
		if(*x==0){*max=V[i]; Vmax[*k]=i;}
	}
}
*k+=1;
}
  for(int i=0; i<*k;i++)
{
cout<<" max["<<i+1<<"]="<< V[ Vmax[i] ] <<endl;
}
  
return 0;

}
