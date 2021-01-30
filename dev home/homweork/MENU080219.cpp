#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
int a=-10,b=-10,c=-10;
while(1)
{
system("cls");
cout<<" \n\n\t ***M E N I U***"<<endl;
cout<<" \t 1. Enter a"<<endl;
cout<<" \t 2. Enter b"<<endl;
cout<<" \t 3. Enter c"<<endl;
cout<<" \t 4. a+b-c"<<endl;
cout<<" \t 5. Show 4."<<endl;
cout<<" \tESC. Exit"<<endl;
switch(_getch())
{
case 49:system("cls"); {cout<<" 1. Enter a"<<endl; a=_getch(); a-=48; system("pause");	break;
case 50:system("cls"); {cout<<" 2. Enter b"<<endl; b=_getch(); b-=48;  system("pause");} break;
case 51:system("cls"); {cout<<" 3. Enter c"<<endl; c=_getch(); c-=48; system("pause");} break;
case 52:system("cls"); {cout<<" 4. "; if(a==-10||b==-10||c==-10){ cout<<"Fratele meu, insereaza variabilile!"<<endl; } else {cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl; cout<<"     a+b-c="<<a<<'+'<<b<<'-'<<c<<endl;} system("pause"); } break;
case 53:system("cls"); cout<<" 5. "; if(a==-10||b==-10||c==-10){ cout<<"Fratele meu, insereaza variabilile!"<<endl; } else  {cout<<"\ta+b-c="<<a+b-c<<endl;} system("pause"); break;
case 27: exit(0);
}
}}

return 0;

}
