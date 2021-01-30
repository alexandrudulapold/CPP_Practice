#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;

struct stud
{
char nume[255];
int ani;
double media;
};
void insert(stud S[],int n)
{
for(int i=0; i<n; i++)
{
cout<<"Studentul ["<<i+1<<"] Enter nume:";
cin>>S[i].nume;
cout<<"Studentul ["<<i+1<<"] Enter ani:";
cin>>S[i].ani;
cout<<"Studentul ["<<i+1<<"] Enter media:";
cin>>S[i].media;
system("cls");
}
}
void show(stud S[],int n)
{
int a=0,b=2;

while(1)
{
system("cls");
cout<<"Nr."<<" nume "<<" ani "<<" media "<<endl;
cout<<"-------------------------"<<endl;

for(int i=a; i<b; i++)
{
cout<<setw(3)<<i+1<<setw(6)<<S[i].nume<<setw(5)<<S[i].ani<<setw(7)<<S[i].media<<endl;
cout<<"-------------------------"<<endl;
}
char Key=_getch();
if( Key== '+') { a+=2; b+=2; if( b>=n ){ a=n-2; b=n; } }
else if( Key== '-') { a-=2; b-=2; if( a<0 ){ a=0; b=2; } }
else if( (int)Key== 27) { break; }
}
}

char* insertSIR(char mes[])
{
char *p=new char[255];
cout<<mes;
cin>>p;
return p;
}

void showONE(stud S[],int i)
{
cout<<"\tStudentul ["<<i+1<<"] Nume:"<<S[i].nume<<endl;
cout<<"\tStudentul ["<<i+1<<"] Ani:"<<S[i].ani<<endl;
cout<<"\tStudentul ["<<i+1<<"] Media:"<<S[i].media<<endl;
}

void cautaNUME(stud S[],int n)

{ bool x=0;
char *nume;
nume=insertSIR("Enter name:");

for(int i=0; i<n; i++)
{
if( strcmp(S[i].nume,nume)==0 )
{ x=1; showONE(S,i); }
}
if(x==0){ cout<<" Erorr nu sunt coincidente !!"<<endl; }
}

int main()
{
cout<<char(200) <<endl;
system("pause");
stud S[1000];

//stud *S = new stud[10];

while(1)
{ system("cls");
cout<<" \n\t\t *** M E N I U ***"<<endl;
cout<<" \t\t 1. Inserare "<<endl;
cout<<" \t\t 2. Afisare "<<endl;
cout<<" \t\t 3. Cautare "<<endl;
cout<<" \t\tESC. Iesire "<<endl;

switch(_getch())
{
case 49: { system("cls"); insert(S,5); }break;
case 50: { system("cls"); show(S,5); system("pause"); }break;
case 51: { system("cls"); cautaNUME(S,5); system("pause"); }break;
case 27: { exit(0); }break;
}
}

return 0;

}
