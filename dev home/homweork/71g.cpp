#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<conio.h>


using namespace std;

int main()
{srand(time(0));

cout<<"Enter a"<<endl;
char a=_getch();
cout<<" a="<<a<<" ;ascii a="<<int(a)<<endl;

cout<<"Enter b"<<endl;
char b=_getch();
cout<<" b="<<b<<" ;ascii b="<<int(b)<<endl;


cout<<"Enter c"<<endl;
char c=_getch();
cout<<" c="<<c<<" ;ascii c="<<int(c)<<endl;





cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
char R=a+b-c;
cout<<" raspuns="<<R-48<<endl;


return 0;
}
