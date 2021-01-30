#include<iostream> 
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;

int main()
{ 
char sir[]=" ITSteppp 2019 ", tmp;
cout<<sir<<endl;
int m1=0, m2=0;
bool t=0;
cout<<"Simboluri in sir: "<<strlen(sir)<<endl;
for(int i=0; i<strlen(sir); i++)
{
	if((int)sir[i]>=65 && (int)sir[i]<=90) { m1++; }
	if((int)sir[i]>=97 && (int)sir[i]<=122) { m2++; }
}
cout<<"Literi mari in sir: "<<m1<<endl;
cout<<"Literi mici in sir: "<<m2<<endl;


while(!t)
{t=1;
for(int i=0; i<strlen(sir); i++)
{
	if( (int)sir[i]>(int)sir[i+1] )
	{
		tmp=(char)sir[i];
		(char)sir[i]=(char)sir[i+1];
		(char)sir[i+1]=tmp;
		t=0;
	}
}
}
cout<<sir;

return 0;
}
