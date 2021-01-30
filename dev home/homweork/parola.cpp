#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
using namespace std;
int main()
{
char password[]="step";
char pass[255];
int i=0,C=0, SEC=10;
cout<<"\n\n\n\t [0] Enter password::";
while(1)
{
pass[i]=_getch();
if( int(pass[i])==8 )
{ if(i>0){ cout<<"\b \b"; i--; } }
else if( int(pass[i])==13)
{ pass[i]=0;
if(strcmp(password,pass)==0){ cout<<" Password OK"<<endl; break;}
else
{ system("cls");
cout<<"\n\n\n\t ["<<C<<"] Password ERROR"<<endl; system("pause");
i=0;
C++;


if( C%3==0 && C>0 )
{
for(int i=0; i<SEC; i++)
{
system("cls");
cout<<i;
Sleep(900);
}
SEC+=10;
}

system("cls");
cout<<"\n\n\n\t ["<<C<<"] Enter password::";
}
}

else{
//cout<<pass[i];
cout<<'*';
i++;
}
}
system("cls");
cout<<"\n START "<<endl;

return 0;
}
