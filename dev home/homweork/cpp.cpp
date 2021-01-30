#include<iostream>
using namespace std;

class in;
class str;
class npp;
class univ;
class stud;



class in
{
int val;
public:
friend istream& operator>>(istream&, stud&);
friend ostream& operator<<(ostream&, stud&);
friend void f(stud&);
};

class str
{
char val[255];
public:
friend istream& operator>>(istream&, stud&);
friend ostream& operator<<(ostream&, stud&);
friend void f(stud&);
};


class npp
{
str NUME;
str PRENUME;
in ANI;
public:
friend istream& operator>>(istream&, stud&);
friend ostream& operator<<(ostream&, stud&);
friend void f(stud&);
};

class univ
{
str PROFESIONALITATE;
str CATEDRA;
str GRUPA;
public:
friend istream& operator>>(istream&, stud&);
friend ostream& operator<<(ostream&, stud&);
friend void f(stud&);
};

class stud
{
npp NPP;
univ UNIV;
public:
friend istream& operator>>(istream&,stud&);
friend ostream& operator<<(ostream&,stud&);
friend void f(stud&);
};


istream& operator>>(istream&X,stud&Obj)
{
cout<<"operator Enter nume=";
X >> Obj.NPP.NUME.val;
cout<<"operator Enter prenume=";
X >> Obj.NPP.PRENUME.val;
cout<<"operator Enter ani=";
X >> Obj.NPP.ANI.val;
return X;
}

ostream& operator<<(ostream&X,stud&Obj)
{
X<<"\n operator nume="<< Obj.NPP.NUME.val
<<"\n operator prenume="<< Obj.NPP.PRENUME.val
<<"\n operator ani="<< Obj.NPP.ANI.val;
return X;
}


void f(stud&X)
{
cout<<"f() Enter profesionalitate=";
cin >> X.UNIV.PROFESIONALITATE.val;
cout<<"f() Enter catedra=";
cin >> X.UNIV.CATEDRA.val;
cout<<"f() Enter grupa=";
cin >> X.UNIV.GRUPA.val;
}

void ff(stud&X)
{
cout<<"f() profesionalitate="<<X.UNIV.PROFESIONALITATE.val
<<"f() catedra="<<X.UNIV.CATEDRA.val
<<"f() grupa="<<X.UNIV.GRUPA.val;
}

int main()
{
stud S;
//cout<<" sizeof(S)="<<sizeof(S)<<endl;
cin>>S;
cout<<S;
//f(S);
return 0;
}
