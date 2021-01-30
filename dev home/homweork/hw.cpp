#include<iostream>
#include<conio.h>

using namespace std;


class stud
{
	char nume[255];
	char grupa[255];
	int ani;
	int note[666];
	double media;
	double suma=0;
	int nrnote;
public:
 		  
  void setNUME(){cout<<" Enter nume=";    cin>>nume; }	 	
  void setGRUPA(){cout<<" Enter grupa="; cin>>grupa; }	 	
  void setANI(){cout<<" Enter ani=";       cin>>ani; }	 	
  void setNOTE()
{
	for(int i=0; i<666; i++)
	{
		cout<<" Enter nota=";   cin>>note[i];
		system("cls");
		cout<<" Daca vrei sa mai pui o nota apasa orice buton\n Daca vrei sa iesi apasa ESC.\n\n\n\n";
		system("pause");
		if(_getch()==27) { break; system("cls"); }
		system("cls");
		
		suma+=note[i];
		nrnote=i+1;
	}	
	media=suma/nrnote;	
}
  const char* getNUME()const  { return nume;  }
  const char* getGRUPA()const { return grupa; }
  const int getANI()const     { return ani;   }
  const double getMEDIA()const{ return media; }
}s[100];




int main()
{

 
  s[0].setNUME();
  s[0].setGRUPA();
  s[0].setANI();
  s[0].setNOTE();
  
  cout<<"  nume= "<<s[0].getNUME()<<endl;
  cout<<" grupa= "<<s[0].getGRUPA()<<endl;
  cout<<"   ani= "<<s[0].getANI()<<endl;
  cout<<" media= "<<s[0].getMEDIA()<<endl;

return 0;
}
