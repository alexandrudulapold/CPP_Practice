#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

class student
{
	char npp[255];
	int clasa;
	double media;
  
public:
	
  char*  getNPP()    { return this->npp;   }
	int  getCLASA()  { return this->clasa; }
 double  getMEDIA()  { return this->media; }
 	void setNPP()   { cout<<" insert NPP:";   cin>>this->npp;   }
 	void setCLASA() { cout<<" insert clasa:"; cin>>this->clasa; }
 	void setMEDIA() { cout<<" insert media:"; cin>>this->media; }
	
};


int main()
{
	student S[10];
	int sS=0;
	char s[255];
	
	
while(1)
{
		system("cls");
		cout<<"\t -MENIU-"<<endl;
		cout<<"\t1. Insert student"<<endl;
		cout<<"\t2. Show student"<<endl;
		cout<<"\t3. Save file"<<endl;
		cout<<"\t4. Load file"<<endl;
		cout<<"\tESC. Exit"<<endl;	
		
	switch(_getch())
	{
		
		case 49:
		{	
		system("cls");
			cout<<" --Insert STUDENT "<<sS<<"--"<<endl;
			S[sS].setNPP();
			S[sS].setCLASA();
			S[sS].setMEDIA();
			ofstream insert;
			if(sS==0) {	insert.open("student_meniu.txt");           }
			else      {	insert.open("student_meniu.txt", ios::app); }
			insert<<" --STUDENT_"<<sS<<"--\n"<<S[sS].getNPP()<<"\n"<<S[sS].getCLASA()<<"\n"<<S[sS].getMEDIA()<<endl;
			sS++;
		insert.close();
		}break;
	
		
		case 50:
		{
		system("cls");
			cout<<" --Show STUDENT--"<<endl;
			ifstream show("student_meniu.txt");
			while(!show.eof())
			{
				show>>s;
				cout<<s<<endl;
				s[0]=0;
			}
		system("pause");
		show.close();
		}break;
		
		case 51:
		{
		}break;
	}
	
}
	
return 0;
}


