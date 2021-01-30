#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
int M[100][100],n; // wi=0, wj=0
cout<<"Enter NxN =";
cin>>n;

for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
M[i][j]=rand()%20;
/// cout<<"Enter M["<<i<<"]["<<j<<"]=";
/// cin>>M[i][j];
}
//cout<<endl;
}

for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
cout<<setw(4)<<M[i][j];}
}



/*
                        while
while(wi<n)
{wj=0;
	while(wj<n)
	{
		
		M[wi][wj]=rand()%20;
		cout<<setw(4)<<M[wi][wj];
		wj++;
	}
	wi++;
}
                         do while
 
 do{
 	wj=0;
 	do{
 		M[wi][wj]=rand()%20;
		cout<<setw(4)<<M[wi][wj];
 		
 		wj++;
	 }while(wj<n);
 	
 	wi++;
 }while(wi<n);
  */
 
 
 
cout<<endl;

int s=0;
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
s+=M[i][j];
}
}
cout<<" s="<<s<<endl;
int max=M[0][0];
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
if(M[i][j]>max) max=M[i][j];
}
}
cout<<" max="<<max<<endl;
int min=M[0][0];
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
if(M[i][j]<min) min=M[i][j];
}
}
cout<<" min="<<min<<endl;
cout<<endl;
for(int i=0; i<n; i++)
{ s=0;
for(int j=0; j<n; j++)
{
if(i==0 || i==n-1 || j==0 || j==n-1) {cout<<setw(4)<<M[i][j];} 
else{cout<<"    ";}
s+=M[i][j];
if(s>25 && s<=40) {}
}
cout<<"    s="<<s<<endl;
}

cout<<endl;
//// Linia 1 <=> N
for(int j=0, tmp ; j<n; j++)
{
tmp=M[0][j];
M[0][j]=M[n-1][j];
M[n-1][j]=tmp;
}

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
