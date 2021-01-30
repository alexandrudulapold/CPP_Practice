#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
	srand(time(0));
	float x=rand()%3, y=rand()%3, e=rand()%3, a=rand()%3; int L, cond;
		
	if(x<1.2) {cond=1; L=(abs( pow(x,x/y)-cbrt(y/x)) ); cout<<"cond="<<cond<<"\tL="<<L<<endl;}
	else if(x==1.2) {cond=2; pow(cos(pow(x,3)),2)-pow(e,x/a); cout<<"cond="<<cond<<"\tL="<<L<<endl;}
	else {cond=3; M_PI*pow(e,-a*x)*sqrt(pow(a,2)+1.5); cout<<"cond="<<cond<<"\tL="<<L<<endl;}
		
	
	
	return 0;
}
