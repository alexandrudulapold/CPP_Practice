int sid=1, idnp1=12345;
int is=0;
struct stud
{
	char prenume[20];
	char nume[20];
	int ani;
	int idnp;
	char grupa[10];
	int userins;
	bool stare=1;
	
}S[1000],SS[1000];

int uid=1, lidsave;

struct user
{
	char login[20];
	char parola[20];
	bool tip;
	bool stare=1;
	int id;
}CONT[1000];


FILE *fp;
 
int FRONT=NULL, BACK=NULL, NIVEL=1; 

int a=1, b=4;
 
 
 
