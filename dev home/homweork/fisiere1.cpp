#include<iostream> 
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;

int main()
{  

  // FILE *fp;
 /*  
   fopen("NumeFile.extensie","regim");                              
  
  regimuri:
  	
    1. r   - 
    2. w   - 
    3. r+  -
    4. w+  -
    5. a   - 
    6. r+b ( rb+ ) - 
    7. w+b ( wb+ )- 
    
  */ 
    
   //fp=fopen("c:\\1\\test.txt","w+"); 
   
   FILE *fp,*fpp;
   char a[255],b[255];
   
   cout<<" Enter filename=";
   cin>>a;

   strcat(a,".txt");
   
   
   fp=fopen(a,"w+");
   if( fp==NULL ){ cout<<"Error create file !!!"<<endl; exit(1);  }
    else { cout<<"Ok create file !!!"<<endl;  }
   int n;
   cout<<"enter n="; cin>>n;
   
   for(int i=0; i<n; i++)
   {
   	int x=rand()%10, y=rand()%10, z=rand()%10;
	putc(x,fp);
	putc('+',fp);
	putc(y,fp);
	putc('-',fp);
	putc(z,fp);
	putc('=',fp);
	putc(x+y-z,fp);
   }

   
  rewind(fp);
    
     char x;
    
    do
	{ 
	x=getc(fp);
      cout<<" x="<<x<<endl;	
	}while(!feof(fp));
    
   fclose(fp);
   
   
   fp=fopen(a,"r+");
   
   if( fp==NULL ){ cout<<"Error create file !!!"<<endl; exit(1);  }
    else { cout<<"Ok create file !!!"<<endl;  }
    
    do
	{ 
	x=getc(fp);
      cout<<" x="<<x<<endl;	
	}while(!feof(fp));
           
   fclose(fp); 
 
 return 0;
}

