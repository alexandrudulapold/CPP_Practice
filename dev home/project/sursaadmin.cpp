
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int editstud()
{
	cout<<"\t\t Meniu Editare Student"<<endl;
	cout<<"\t\t 1. Edit prenume"<<endl;
	cout<<"\t\t 2. Edit nume"<<endl;
	cout<<"\t\t 3. Edit ani"<<endl;
	cout<<"\t\t 4. Edit grupa"<<endl;
	cout<<"\t\t 5. Edit stare"<<endl;
	cout<<"\t\t ESC. Exit"<<endl;
switch(_getch())
{
case 49:



case 27: return 777;
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int anicheck;
int insertstud()
{
	system("cls");
	S[sid].idnp=idnp1;
	cout<<"\n\n\t\t Enter Prenume Student: "; cin>>S[sid].prenume;
	cout<<"\n\n\t\t Enter Nume Student: "; cin>>S[sid].nume;
	do
	{
	cout<<"\n\n\t\t Enter Ani Student: "; cin>>anicheck;
	if(anicheck>=0 && anicheck<150) {S[sid].ani=anicheck; break;}
	else 
	{
	system("cls");
	cout<<"\n\n\t\t Enter Prenume Student: "<<S[sid].prenume<<endl;
	cout<<"\n\n\t\t Enter Nume Student: "<<S[sid].nume<<endl;
	}
	}while(1);
	cout<<"\n\n\t\t Enter Grupa Student: "; cin>>S[sid].grupa;
	sid++; idnp1++;
	system("cls");
	cout<<" If you want to insert one more student > press any key\n   Esc. Exit\n\n\n\n"<<endl;
	if(_getch()==27){ return 777; }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int showstud()
{	

	system("cls");
	cout<<"     Prenume   |"<<"   Nume   |"<<" Ani |"<<"   IDNP   |"<<" Grupa |"<<" User_ins. [id] |"<<" stare "<<endl;
cout<<"------------------------------------------------------------------------------"<<endl;
for(int i=a; i<b; i++)
{
cout<<setw(2)<<i<<" |"<<setw(7)<<S[i].prenume<<setw(12)<<S[i].nume<<setw(7)<<S[i].ani<<setw(11)<<S[i].idnp<<setw(8)<<S[i].grupa
<<setw(8)<</*S[i].userins*/12<<setw(16)<<S[i].stare<<endl;
cout<<"------------------------------------------------------------------------------"<<endl;
}

char Key=_getch();
if( Key=='+') { a+=4; b+=4; if( b>=sid ){ a=sid-3; b=sid; } }
else if( Key=='-') { a-=4; b-=4; if( a<1 ){ a=1; b=4; } }
else if((int)Key==27) { a=1, b=4; return 777; }

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int findstud()
{
	char numefind[20], prenumefind[20], grupafind[10];
	int idnpfind;
	cout<<"\t\t Meniu Find Student"<<endl;
	cout<<"\t\t 1. Find by nume"<<endl;
	cout<<"\t\t 2. Find by prenume"<<endl;
	cout<<"\t\t 3. Find by grupa"<<endl;
	cout<<"\t\t 4. Find by IDNP"<<endl;
	cout<<"\t\t ESC. Exit"<<endl;
switch(_getch())
{
	case 49:
	{
	system("cls");
	cout<<"Enter nume: "; cin>>numefind;
	is=0;


	system("cls");
	cout<<"     Prenume   |"<<"   Nume   |"<<" Ani |"<<"   IDNP   |"<<" Grupa |"<<" User_ins. [id] |"<<" stare "<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	for(int i=1; i<sid; i++)
{
if(strcmp(numefind,S[i].nume)==0) 
{ is++;

	{
	cout<<setw(2)<<i<<" |"<<setw(7)<<S[i].prenume<<setw(12)<<S[i].nume<<setw(7)<<S[i].ani<<setw(11)<<S[i].idnp
	<<setw(8)<<S[i].grupa<<setw(8)<</*S[i].userins*/12<<setw(16)<<S[i].stare<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	}
}	
}
if(is==0) 
{
	system("cls");
	cout<<"0 studenti cu numele:"<<numefind<<"\n\n"<<endl;
}
system("pause");
	}break;		


	case 50:
	{
	system("cls");
	cout<<"Enter prenume: "; cin>>prenumefind;
	is=0;


	system("cls");
	cout<<"     Prenume   |"<<"   Nume   |"<<" Ani |"<<"   IDNP   |"<<" Grupa |"<<" User_ins. [id] |"<<" stare "<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	for(int i=1; i<sid; i++)
{
if(strcmp(prenumefind,S[i].prenume)==0) 
{ is++;

	{
	cout<<setw(2)<<i<<" |"<<setw(7)<<S[i].prenume<<setw(12)<<S[i].nume<<setw(7)<<S[i].ani<<setw(11)<<S[i].idnp
	<<setw(8)<<S[i].grupa<<setw(8)<</*S[i].userins*/12<<setw(16)<<S[i].stare<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	}
}	
}
if(is==0) 
{
	system("cls");
	cout<<"0 studenti cu prenumele:"<<prenumefind<<"\n\n"<<endl;
}
system("pause");

	}break;	


	case 51:
	{
	system("cls");
	cout<<"Enter grupa: "; cin>>grupafind;
	is=0;


	system("cls");
	cout<<"     Prenume   |"<<"   Nume   |"<<" Ani |"<<"   IDNP   |"<<" Grupa |"<<" User_ins. [id] |"<<" stare "<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	for(int i=1; i<sid; i++)
{
if(strcmp(grupafind,S[i].grupa)==0) 
{ is++;

	{
	cout<<setw(2)<<i<<" |"<<setw(7)<<S[i].prenume<<setw(12)<<S[i].nume<<setw(7)<<S[i].ani<<setw(11)<<S[i].idnp
	<<setw(8)<<S[i].grupa<<setw(8)<</*S[i].userins*/12<<setw(16)<<S[i].stare<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	}
}	
}
if(is==0) 
{
	system("cls");
	cout<<"0 studenti cu grupa:"<<grupafind<<"\n\n"<<endl;
}
system("pause");

	}break;	


	case 52:
	{
	system("cls");
	cout<<"Enter IDNP: "; cin>>idnpfind;
	is=0;
	
	system("cls");
	cout<<"     Prenume   |"<<"   Nume   |"<<" Ani |"<<"   IDNP   |"<<" Grupa |"<<" User_ins. [id] |"<<" stare "<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	for(int i=1; i<sid; i++)
{
if(idnpfind==S[i].idnp) 
{	is=1;
	cout<<setw(2)<<i<<" |"<<setw(7)<<S[i].prenume<<setw(12)<<S[i].nume<<setw(7)<<S[i].ani<<setw(11)<<S[i].idnp
	<<setw(8)<<S[i].grupa<<setw(8)<</*S[i].userins*/12<<setw(16)<<S[i].stare<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	break;
}
}
if(is==0) 
{
	system("cls");
	cout<<"Error (incorrect IDNP)\t"<<idnpfind<<"\n\n"<<endl;
}
system("pause");

	}break;	

	case 27: return 777;
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char loginfind[20];
int idfind;
bool starefind, tipfind;
int findu()
{
	cout<<"\t\t Meniu Find User"<<endl;
	cout<<"\t\t 1. Find by login"<<endl;
	cout<<"\t\t 2. Find by ID"<<endl;
	cout<<"\t\t 3. Find by tip"<<endl;
	cout<<"\t\t 4. Find by stare"<<endl;
	cout<<"\t\t ESC. Exit"<<endl;
switch(_getch())
{
	case 49:
{
	system("cls");
	cout<<"Enter login: "; cin>>loginfind;
	system("cls");
	cout<<" id    "<<"     login     "<<" stare "<<" tip "<<endl;
	cout<<"--------------------------------------"<<endl;
	for(int i=1; i<uid; i++)
	{
if(strcmp(CONT[i].login,loginfind)==0) {coutuserfind(i);}
	}
		system("pause");

}break;

	case 50:
{
	do
	{	
	system("cls");
	cout<<"Enter ID: "; cin>>idfind;
	if(idfind>uid-1 || idfind<1) {cout<<"Wrong ID;"<<"\t max id="<<uid-1<<endl;}
	else break;
	}
	while(1);
	system("cls");
	cout<<" id    "<<"     login     "<<" stare "<<" tip "<<endl;
	cout<<"--------------------------------------"<<endl;
	coutuserfind(idfind);
	system("pause");
}break;

		case 51:
{
	do
	{
	system("cls");
	cout<<"Enter tip (1=admin/0=user): "; cin>>tipfind;
	if(tipfind>1 || tipfind<0) {cout<<"Wrong tip; (1=admin/0=user)"<<endl;}
	else break;
	cout<<"Esc. Exit"<<endl;
	if(_getch()==27) return 777;
	}while(1);
	system("cls");
	cout<<" id    "<<"     login     "<<" stare "<<" tip "<<endl;
	cout<<"--------------------------------------"<<endl;
	for(int i=1; i<uid; i++)
	{
if(CONT[i].tip==tipfind) {coutuserfind(i);}
	}	system("pause");
}break;

		case 52:
{
	do
	{
	system("cls");
	cout<<"Enter stare (1=activ/0=dez): "; cin>>starefind;
	if(starefind>1 || starefind<0) {cout<<"Wrong stare; (1=activ/0=dez)"<<endl;}
	else break;
	cout<<"Esc. Exit"<<endl;
	if(_getch()==27) return 777;
	}while(1);
	system("cls");
	cout<<" id    "<<"     login     "<<" stare "<<" tip "<<endl;
	cout<<"--------------------------------------"<<endl;
	for(int i=1; i<uid; i++)
	{
if(CONT[i].stare==starefind) {coutuserfind(i);}
	}	system("pause");
}break;

	case 27: return 777;
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int tempid=NULL;
int editu()
{
	cout<<"\t\t Meniu Editare User"<<endl;
	cout<<"\t\t 1. Edit login"<<endl;
	cout<<"\t\t 2. Edit parola"<<endl;
	cout<<"\t\t 3. Edit stare"<<endl;
	cout<<"\t\t 4. Edit tip"<<endl;
	cout<<"\t\t ESC. Exit"<<endl;
switch(_getch())
{
	
case 49:
{
	do
	{
	system("cls");
	cout<<"Enter user id: "; cin>>tempid;
	if((tempid>uid-1 || tempid<1)&&uid==1) {cout<<"Wrong id;"<<"\tno users"<<endl;}
	else if(tempid>uid-1 || tempid<1) {cout<<"Wrong id;"<<"\tmax id="<<uid-1<<endl;}
	else break;
	cout<<"Esc. Exit"<<endl;
	if(_getch()==27) return 777;
	}while(1);
	coutuseredit(tempid);
	cout<<"Enter new login: "; cin>>CONT[tempid].login;
	coutuseredit(tempid);
	cout<<"\n\n\n\n"<<endl;
	system("pause");
}break;


case 50: 
{
 	system("cls");
	cout<<"Enter user id: "; cin>>tempid;
	cout<<"Parola: "<<CONT[tempid].parola<<endl;
	cout<<"Enter new parola: "; cin>>CONT[tempid].parola;
	cout<<"Parola: "<<CONT[tempid].parola<<endl;
	cout<<"\n\n\n\n"<<endl;
	system("pause");
}break;


case 51: 
{
 	system("cls");
	cout<<"Enter user id: "; cin>>tempid;
	coutuseredit(tempid);
	cout<<"Press enter to switch stare (activ=1/dez=0) "; 
	if(_getch()==13) CONT[tempid].stare=(!CONT[tempid].stare);
	coutuseredit(tempid);
	cout<<"\n\n\n\n"<<endl;
	system("pause");
}break;

case 52:
{
 	system("cls");
	cout<<"Enter user id: "; cin>>tempid;
	coutuseredit(tempid);
	cout<<"Press enter to switch stare (admin=1/user=0) "; 
	if(_getch()==13) CONT[tempid].tip=(!CONT[tempid].tip);
	coutuseredit(tempid);
	cout<<"\n\n\n\n"<<endl;
	system("pause");
}break;

	case 27: return 777;
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int showu()
{
	system("cls");
	cout<<" id    "<<"     login     "<<" stare "<<" tip "<<endl;
cout<<"--------------------------------------"<<endl;
for(int i=1; i<uid; i++)
{
cout<<setw(2)<<i<<" |"<<setw(13)<<CONT[i].login<<setw(9)<<CONT[i].stare<<setw(7)<<CONT[i].tip<<endl;
cout<<"--------------------------------------"<<endl;

}

	if(_getch()==27){ return 777; }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int x=2;
int createu()
{
	system("cls");
	CONT[uid].id=uid;
	cout<<"\n\n\t\t Enter login: "; cin>>CONT[uid].login;
	cout<<"\n\t\t Enter password: "; cin>>CONT[uid].parola;
do
{
cout<<"\n\t\t Enter type 0-user, 1-admin: "; cin>>x;
if(x==0 || x==1) {CONT[uid].tip=x; break;}
else {system("cls"); 
	cout<<"\n\n\t\t Enter login: "<<CONT[uid].login;
	cout<<"\n\n\t\t Enter password: "<<CONT[uid].parola;}
}while(1);


	cout<<"\n\t\t User id: "<<CONT[uid].id<<endl;
	
uid++;
cout<<"\n\n\n"<<endl;
system("pause");
	system("cls");
	cout<<" If you want to insert one more user > press any key\n   Esc. Exit\n\n\n\n"<<endl;
	if(_getch()==27){ return 777; }

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int meniuA1()
{
	cout<<"\n\n\t\t Submeniu Meniu  1.1"<<endl;
	cout<<"\t\t   1. Insert User"<<endl;
	cout<<"\t\t   2. Show User"<<endl;
	cout<<"\t\t   3. Find User"<<endl;
	cout<<"\t\t   4. Edit User"<<endl;
	cout<<"\t\t ESC. Exit"<<endl;
	
	switch(_getch())
	{
		case 49: NIVEL=111;	return 0;
		case 50: NIVEL=112; return 1;
		case 51: NIVEL=113; return 2;
		case 52: NIVEL=114; return 3;
		case 27: return 777;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int meniuA()
{
	cout<<"\n\n\t\t Meniu BAZA"<<endl;
	cout<<"\t\t   1. Management User"<<endl;
	cout<<"\t\t   2. Insert Student"<<endl;
	cout<<"\t\t   3. Show Student"<<endl;
	cout<<"\t\t   4. Find Student"<<endl;
	cout<<"\t\t   5. Edit Student"<<endl;
	cout<<"\t\t ESC. Exit"<<endl;
	
	switch(_getch())
	{
		case 49: NIVEL=11; return 0;
		case 50: NIVEL=12; return 1;
		case 51: NIVEL=13; return 2;
		case 52: NIVEL=14; return 3;
		case 53: NIVEL=15; return 4;
		case 27: return 777;
	}
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  int managementMENIUadmin()
  {
  	switch(NIVEL)
	{
		case 1: return meniuA();
		/*         <10          */
		case 11: return meniuA1();
		case 12: return insertstud();
		case 13: return showstud();
		case 14: return findstud();
		case 15: return editstud();
		/*        <100          */
		case 111: return createu();
		case 112: return showu();
		case 113: return findu();
		case 114: return editu();
		/*        <1000         */
	}
  }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




