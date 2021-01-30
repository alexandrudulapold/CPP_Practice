#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()

{


int a=-1,o=-1,b=-1,x=0;

XXX:

switch(_getch())

{

case 48: cout<<"0"; a=0; x=x*10+a; break;
case 49: cout<<"1"; a=1; x=x*10+a; break;
case 50: cout<<"2"; a=2; x=x*10+a; break;
case 51: cout<<"3"; a=3; x=x*10+a; break;
case 52: cout<<"4"; a=4; x=x*10+a; break;
case 53: cout<<"5"; a=5; x=x*10+a; break;
case 54: cout<<"6"; a=6; x=x*10+a; break;
case 55: cout<<"7"; a=7; x=x*10+a; break;
case 56: cout<<"8"; a=8; x=x*10+a; break;
case 57: cout<<"9"; a=9; x=x*10+a; break;
case 43: if( a != -1&& o==-1 ){cout<<"+"; o=0; b=x; a=-1; x=0;}break;
case 45: if( a != -1&& o==-1 ){cout<<"-"; o=1; b=x; a=-1; x=0;}break;
case 47: if( a != -1&& o==-1 ){cout<<"/"; o=2; b=x; a=-1; x=0;}break;
case 42: if( a != -1&& o==-1 ){cout<<"*"; o=3; b=x; a=-1; x=0;}break;
case 61: if( a != -1&&o!=-1 ){cout<<"="; 

switch(o)

{

case 0: cout<<b+x<<endl;break;
case 1: cout<<b-x<<endl;break;
case 2: cout<<(double)b/x<<endl;break;
case 3: cout<<b*x<<endl;break;

}

a=-1; b=-1; o=-1; x=0;

}

break;

case 27: exit(0);

}

goto XXX;

return 0;

}
