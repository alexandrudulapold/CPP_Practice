#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));

int V1[888], V2[888], n;

for(n=rand()%10+10; n%2!=0; )	{n=rand()%10+10;}


for(int i=0; i<n; i++)
{
	V1[i]=rand()%15;
	V2[i]=rand()%15;
}

for(int i=0; i<n;i++){ cout<<setw(3)<<V1[i]; }
cout<<endl;
for(int i=0; i<n;i++){ cout<<setw(3)<<V2[i]; }

for(int i=0, tmp; i<n;i++)
{
tmp=V1[i];
V1[i]=V2[i];
V2[i]=tmp;
}
for(int i=0, tmp; i<n;i++)
{
tmp=V1[i];
V1[i]=V2[(n-1)-i];
V2[(n-1)-i]=tmp;
}

cout<<"\n\n--------------------V1<=>V2--------------------\n"<<endl;
for(int i=0; i<n;i++){ cout<<setw(3)<<V1[i]; }
cout<<endl;
for(int i=0; i<n;i++){ cout<<setw(3)<<V2[i]; }


int V1f[444], V1s[444], V2f[444], V2s[444];
for(int i=0; i<n; i++)
	{
	  
	 }	
		
	}
	
	cout<<"\n\n--------------------V1<=>V2--------------------\n"<<endl;
for(int i=0; i<n;i++){ cout<<setw(3)<<V1f[i]; }
cout<<endl;
for(int i=0; i<n;i++){ cout<<setw(3)<<V2f[i]; }
	
	return 0;

}
