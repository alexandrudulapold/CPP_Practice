#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	
	int a,b,c,x,y;
	a=rand()%15;
	b=rand()%15;
	c=rand()%15;
	x=rand()%15;
	y=rand()%15;
	
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<" x="<<x<<" y="<<y<<endl;
	
	int R1=pow(x,3)+pow(y,2)-c;
	cout<<" R1="<<R1<<endl;
	int R2=2+b;
	cout<<" R2="<<R2<<endl;
	double R3=(double)cbrt(R2);
	cout<<" R3="<<R3<<endl;
	double R4=(double)pow(b,R3)+c;
	cout<<" R4="<<R4<<endl;
	double R5=R1/R4;
	cout<<" R5="<<R5<<endl;
	double R6=(double)sqrt(R5);
	cout<<" R6="<<R6<<endl;
	
	int R7=a-pow(b,3);
	cout<<" R7="<<R7<<endl;
	double R8=pow(cos(2*a),2);
	cout<<" R8="<<R8<<endl;
	double R9=double(R7)+R8;
	cout<<" R9="<<R9<<endl;
	int R10=a+b+1;
	cout<<" R10="<<R10<<endl;
	double R11=(double)R9/R10;
	cout<<" R11="<<R11<<endl;
	double R12=(double)pow(a,2)+pow(sin(pow(b,2)),3);
	cout<<" R12="<<R12<<endl;
	double R13=R11/R12;
	cout<<" R13="<<R13<<endl;
	double R14=sqrt(R13);
	cout<<" R14="<<R14<<endl;
	
	double V=R6/R14;
	cout<<"\n V="<<V<<endl;
	
	return 0;
}



