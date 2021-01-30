#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string.h>
using namespace std;

struct stud
{
char nume[20];
int ani;
double media;
}S[1000];


int main()
{
srand(time(0));
FILE *fp;
char a[255],b[255], c[255]="D:\\z\\";
cout<<" Enter filename=";
cin>>a;
strcat(c,a);
strcpy(a,c);
strcat(a,".txt");

while(1)
{ system("cls");
cout<<" \n\t\t *** M E N I U ***"<<endl;
cout<<" \t\t 1.  Inserare student "<<endl;
cout<<" \t\t 2.  Afisare studenti "<<endl;
cout<<" \t\t 3.  Salvarea in fisier "<<endl;
cout<<" \t\t 4.  Citirea din fisier  "<<endl;
cout<<" \t\t 5.  Dublarea fisierului  "<<endl;
cout<<" \t\tEsc. Iesire  "<<endl;
switch(_getch())
{
	
case 49: { system("cls");
for(int i=1;  ; i++)
{
cout<<" Enter nume="; cin>>S[i].nume;
cout<<" Enter ani="; cin>>S[i].ani;
cout<<" Enter media="; cin>>S[i].media; i++; break;
}

case 50: { system("cls");  }break;
case 51: { system("cls");  }break;
case 52: { system("cls");  }break;
case 53: { system("cls");  }break;
case 27: { exit(0); }break;
}
}


return 0;
}



