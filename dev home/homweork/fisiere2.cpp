#include<iostream> 
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<ctime>

using namespace std;

int main()
{  	srand(time(0));

  
   FILE *fp;
   char a[255],b[255];
   int m[10][10], z;
   
fp=fopen("D:\\z\\f2.txt","w+");
   
	for(int i=0; i<10; i++)
{z=rand()%10;
		for(int j=0; j<z; j++)
	{
		int xa=rand()%10, xb=rand()%10, xc=rand()%10;
		m[i][j]=xa+xb-xc;
		fprintf(fp," %d ",m[i][j]);
			cout<<" "<<m[i][j];

	}   
	cout<<endl;
	fprintf(fp,"\n");
}   



 return 0;
}

