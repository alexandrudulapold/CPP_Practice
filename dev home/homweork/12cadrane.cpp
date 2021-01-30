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
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
cout<<setw(4)<<M[i][j];
}
cout<<endl;
}

cout<<"\n Cadranul I <=> III "<<endl;
for(int i=0; i<n/2; i++)
{
for(int j=0, tmp; j<n/2; j++)
{
tmp=M[i][j];
M[i][j]=M[ (n/2) + i ][j];
M[ (n/2) + i ][j]=tmp;
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

cout<<"\n Cadranul I <=> IV "<<endl;
for(int i=0; i<n/2; i++)
{
for(int j=0, tmp; j<n/2; j++)
{
tmp=M[i][j];
M[i][j]=M[ (n/2)+i ][ (n/2)+j ];
M[ (n/2)+i ][ (n/2)+j ]=tmp;
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

cout<<"\n Cadranul II <=> I "<<endl;
for(int i=0; i<n/2; i++)
{
for(int j=n/2, tmp; j<n; j++)
{
tmp=M[i][j];
M[i][j]=M[ i  ][ j - (n/2) ];
M[ i  ][ j - (n/2) ]=tmp;
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

cout<<"\n Cadranul II <=> III "<<endl;
for(int i=0; i<n/2; i++)
{
for(int j=n/2, tmp; j<n; j++)
{
tmp=M[i][j];
M[i][j]=M[ (n/2) + i ][ j - (n/2) ];
M[ (n/2) + i ][ j - (n/2) ]=tmp;
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

cout<<"\n Cadranul II <=> IV "<<endl;
for(int i=0; i<n/2; i++)
{
for(int j=n/2, tmp; j<n; j++)
{
tmp=M[i][j];
M[i][j]=M[ i + (n/2) ][ j ];
M[ i + (n/2) ][ j ]=tmp;
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

cout<<"\n Cadranul III <=> I "<<endl;
for(int i=n/2; i<n; i++)
{
for(int j=0, tmp; j<n/2; j++)
{
tmp=M[i][j];
M[i][j]=M[ i - (n/2) ][ j  ];
M[ i - (n/2) ][ j  ]=tmp;
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

cout<<"\n Cadranul III <=> II "<<endl;
for(int i=n/2; i<n; i++)
{
for(int j=0, tmp; j<n/2; j++)
{
tmp=M[i][j];
M[i][j]=M[ i - (n/2) ][ j + (n/2) ];
M[ i - (n/2) ][ j + (n/2) ]=tmp;
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

cout<<"\n Cadranul III <=> IV "<<endl;
for(int i=n/2; i<n; i++)
{
for(int j=0, tmp; j<n/2; j++)
{
tmp=M[i][j];
M[i][j]=M[ i  ][ j + (n/2) ];
M[ i  ][ j + (n/2) ]=tmp;
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

cout<<"\n Cadranul IV <=> I "<<endl;
for(int i=n/2; i<n; i++)
{
for(int j=n/2, tmp; j<n; j++)
{
tmp=M[i][j];
M[i][j]=M[ i - (n/2) ][ j - (n/2) ];
M[ i - (n/2) ][ j - (n/2) ]=tmp;
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

cout<<"\n Cadranul IV <=> II "<<endl;
for(int i=n/2; i<n; i++)
{
for(int j=n/2, tmp; j<n; j++)
{
tmp=M[i][j];
M[i][j]=M[ i - (n/2) ][ j  ];
M[ i - (n/2) ][ j  ]=tmp;
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

cout<<"\n Cadranul IV <=> III "<<endl;
for(int i=n/2; i<n; i++)
{
for(int j=n/2, tmp; j<n; j++)
{
tmp=M[i][j];
M[i][j]=M[ i  ][ j - (n/2) ];
M[ i  ][ j - (n/2) ]=tmp;
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
