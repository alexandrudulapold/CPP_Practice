#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{ 
srand(time(0));

int V[999];

int n;
cout<<"Enter n=";
cin>>n;

   for(int i=0; i<n; i++)
   {
      V[i]=rand()%20;
   }

   for(int i=0; i<n; i++)
   {
   	cout<<" V["<<i<<"]="<<V[i]<<endl; 
   }

// 1. 
  int s=0;
    
   for(int i=0; i<n; i++)
   {
      s+=V[i];
   }

 cout<<" s="<<s<<endl;

// 2.

int s1=0,s0=0;
    
   for(int i=0; i<n; i++)
   {
     if(V[i]%2==0) s0+=V[i];
     else s1+=V[i];
     
   }

 cout<<" s0="<<s0<<" s1="<<s1<<endl;


// 3.

int V0[999],V1[999],i0=0,i1=0;
   for(int i=0; i<n; i++)
   { if(V[i]%2==0)
	 {
	 	V0[i0]=V[i];	i0++;
	 }  
     else
	  {
	    V1[i1]=V[i];    i1++;
	  } 
    }
   cout<<endl;
   for(int i=0; i<i0; i++)
   {cout<<" V0["<<i<<"]="<<V0[i]<<endl; }
     cout<<endl;
   for(int i=0; i<i1; i++)
   {cout<<" V1["<<i<<"]="<<V1[i]<<endl; }
  
   
// 4. 
	cout<<endl;
   for(int i=n-1; i>=0; i--)
   {
   	cout<<" V["<<i<<"]="<<V[i]<<endl; 
   }

// 5. 
	int ppvi=0;
	cout<<endl;
	for(int i=0; i<n; i++)
   {
	if( i%2==0 && V[i]%2!=0 )  { ppvi++; }
   }
 	cout<<"Elemente pe pozitiile pare cu valori impare = "<<ppvi<<endl;
 	
// 6.
 	cout<<endl;
 	int vpmax=NULL;
 	for(int i=0; i<n; i++)
	{	
	  if(V[i]%2==0 && V[i]>vpmax ) vpmax=V[i];
	}
 	cout<<"Valoarea para maximala = "<<vpmax<<endl;
 	
// 7.
 	cout<<endl;
 	int min010=20;
 	for(int i=0; i<n; i++)
 	{
 		if( V[i]>=0 && V[i]<10 && V[i]<min010 ) min010=V[i];
	}
 	cout<<"Valoare minimala din intervalul 0...10 = "<<min010<<endl;
 	
// 8.
	cout<<endl;
	int j1=0, j2=0;
	for(int i=0; i<n/2; i++)
	{
		j1+=V[i];
	}
	for(int i=n-1; i>=n/2; i--)
	{
		j2+=V[i];
	}
	
	cout<<"Suma la prima jumatate = "<<j1<<endl;
	cout<<"Suma la a doua jumatate = "<<j2<<endl;	
 	
return 0;
}

