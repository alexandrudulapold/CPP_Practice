#include <iostream> 
#include <cstdlib>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "structuri.cpp"
#include "sursa.cpp"
#include "sursauser.cpp"
#include "sursaadmin.cpp"

int main()
{

  	FRONT=0;
	
	while(1)
	{
		 system("cls");
		 
	   switch(FRONT)
	   {
	    case 0: BACK=managementMENIUadmin(); break;
		

	   } 
		
	   switch(BACK)
	   {

	   	 case 777: if(NIVEL>9) { NIVEL/=10; }  else{exit(0);} break;
	   	 
	   }  	
	}
	
	return 0;
}
