#include<iostream> 
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

using namespace std;

int insert(char *mes)
{ int x; cout<<mes; cin>>x; return x;}

void insertV(int *v, int *n)
{for(int i=0; i<*n; i++){	*(v+i)=rand()%10; } }
 
void showV(int *v, int *n)
{for(int i=0; i<*n; i++){ cout<<" "<<*(v+i); } }
 
 
 int* sum(int *v, int *n)
 {
 	int *s=new int;
 	*s=0;
 	for(int i=0; i<*n; i++){ *s+=*(v+i); }
 	
 	return s;
 }
 
 int copyv(int *v, int *n,int *vv, int *nn)
 {
 	if( *nn <= *n )
 	{
	  for(int i=0; i<*nn; i++){ *(vv+i)=*(v+i);  }
	  return *nn;
 	}
 	else 
	 { 
	   for(int i=0; i<*n; i++){ *(vv+i)=*(v+i); }
	   return *n;
	 }
 }
 
 
int main()
{ 
  int *n = new int; 
  *n=insert("Enter n=");
  int *v = new int[*n];
  
 
  
  int *w = new int[*n];

  insertV(v,n); 
    showV(v,n); 
    
   cout<<endl;
   
  insertV(w,n); 
    showV(w,n);
	 
   int *s;
   s=sum(v,n);
   
   cout<<"\n v s="<<*s<<endl;
   
   int *ss;
   ss=sum(w,n);
   
   cout<<"\n w ss="<<*ss<<"\n v s="<<*s<<endl;
   
   
   
  int *nn = new int; 
  *nn=insert("Enter nn=");  
  int *vv = new int[*nn]; 
  
  *nn=copyv(v,n,vv,nn);
      showV(vv,nn);
   
return 0;
}

