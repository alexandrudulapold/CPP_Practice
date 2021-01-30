#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
using namespace std;
int insert()
{
int x;
cout<<"Enter val=";
cin>>x;
return x;
}
void insertM(int M[][100],int n,int m)
{
for(int i=0; i<n;i++)
{ for(int j=0; j<m;j++)
{
// M[i][j]=insert();
M[i][j]=rand()%10;
}
}
}
void showM(int M[][100],int n,int m)
{
for(int i=0; i<n;i++)
{ for(int j=0; j<m;j++)
{
cout<<setw(3)<<M[i][j];
}
cout<<endl;
}
}
int sum(int M[][100],int n,int m)
{
int s=0;
for(int i=0; i<n;i++)
{ for(int j=0; j<m;j++)
{
s+=M[i][j];
}}
return s;
}
int maxmin(int M[][100],int n,int m,bool w)
{
int max=-200000;
int min=200000;
for(int i=0; i<n;i++)
{ for(int j=0; j<m;j++)
{
if(M[i][j]>max) max=M[i][j];
if(M[i][j]<min) min=M[i][j];
}
}
if(w==0)return max;
else return min;
}

int parimp(int M[][100],int n,int m, bool w)
{
	int par=0, imp=0;
for(int i=0; i<n;i++)
{ for(int j=0; j<m;j++)
{
if(M[i][j]%2==0) { par+=M[i][j]; }
else { imp+=M[i][j]; }
}
}
if(w==0) {return par;}
else {return imp;}
}

void copytab(int M[][100],int M777[][100],int n,int m)
{
for(int i=0; i<n;i++)
{ for(int j=0; j<m;j++)
{
M777[i][j]=M[i][j];
}
}
}

int valrep(int M[][100],int n,int m)
{
	int x, rep=0;
		cout<<" Enter x=";
	cin>>x;
for(int i=0; i<n;i++)
{ for(int j=0; j<m;j++)
{

	if( M[i][j]==x ) { rep++; }
}
}
return rep;
}

int main()
{
int M[100][100];
int M777[100][100];
int n=insert(),m=insert(),s,rep;
insertM(M,n,m);
showM(M,n,m);
s=sum(M,n,m);
int max=maxmin(M,n,m,0);
int min=maxmin(M,n,m,1);
cout<<" sum="<<s<<endl;
cout<<" max="<<max<<endl;
cout<<" min="<<min<<endl;
int spar=parimp(M,n,m,0);
int simp=parimp(M,n,m,1);
cout<<" Suma pare="<<spar<<"\n Suma impare="<<simp<<endl;
copytab(M,M777,n,m);
cout<<"\n Copy tablou (M777)::"<<endl;
showM(M777,n,m);
rep=valrep(M,n,m);
cout<<" Valoarea inserata sa repetat de "<<rep<<" ori"<<endl;

return 0;
}
