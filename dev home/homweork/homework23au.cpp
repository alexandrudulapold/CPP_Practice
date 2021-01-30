#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));


int V[1000], V1[999],n=5, k=-1, v1h=0, Rmax=0;
for(int i=0; i<n ; i++ )
{
V[++k]=rand()%10;
V[++k]=rand()%10;
V[++k]=rand()%10;
V1[i]=V[++k]=(V[k-1]+V[k-2]-V[k-3]);
}
for(int i=0; i<k+1; i++){ cout<<setw(3)<<V[i]; }


for(int i=0; i<n; i++)
{
	v1h+=V1[i];
}
cout<<endl;
	cout<<"Suma rezultatelor = "<<v1h<<endl;


for(int i=0; i<n; i++)
{
	if( V1[i]>Rmax ) { Rmax=V1[i]; }
}
	cout<<"Raspunsul maximal = "<<Rmax<<endl;

return 0;

}
