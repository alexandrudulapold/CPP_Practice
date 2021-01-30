#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ srand(time(0));


int W[5][1000],n=10;
for(int i=0; i<n; i++)
{
	do{
		W[0][i]=rand()%10;
	}while(W[0][i]%2!=0);

	do{
		W[1][i]=rand()%10;
	}while(W[1][i]%2==0);
	
	W[2][i]=W[0][i]+W[1][i];
	W[3][i]=W[0][i]-W[1][i];
	W[4][i]=W[0][i]*W[1][i];

	
	cout<<setw(6)<<"W[0]["<<i<<"]="<<W[0][i]<<';'<<setw(6)<<"W[1]["<<i<<"]="<<W[1][i]<<endl;
	cout<<setw(10)<<"Suma ="<<W[2][i]<<setw(10)<<"  Diferenta ="<<W[3][i]<<setw(10)<<"  Produsul ="<<W[4][i]<<endl;
	cout<<endl;

}


return 0;
}
