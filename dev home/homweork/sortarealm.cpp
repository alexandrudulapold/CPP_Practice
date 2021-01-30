#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
/*
NxN, n=4
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
4 7 8
1 3 9
2 6 5
M[100][100];
M[0][0]=777;
M[2][2]=777;
M[99][99]=777;
*/
int main()
{
int M[100][100],n;
cout<<"Enter NxN =";
cin>>n;
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
M[i][j]=rand()%10;
}
}
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
cout<<setw(4)<<M[i][j];
}
cout<<endl;
}
cout<<"\n Cadranul I <=> II "<<endl;
for(int i=0; i<n/2; i++)
{
for(int j=0, tmp; j<n/2; j++)
{
tmp=M[i][j];
M[i][j]=M[i][ (n/2) + j ];
M[i][ (n/2) + j ]=tmp;
}
}
cout<<endl;
bool z=0;
while(!z)
{
z=1;
for(int i=0, tmp; i<n-1; i++)
{
	for(int j=0; j<n; j++)
	{
if(M[j][i]>M[j][i+1])
{
tmp=M[j][i];
M[j][i]=M[j][i+1];
M[j][i+1]=tmp;
z=0;}
}
}
}
cout<<endl;
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
cout<<setw(4)<<M[i][j];
}
cout<<endl;
}

return 0;
}
