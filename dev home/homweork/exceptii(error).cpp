#include<iostream>
#include<exception>

using namespace std;

int main()
{

  try
  {
  	int n=20000000000;
  //	int n=10000;
  	int *p=new int[n];
    cout<<" S-a alocat "<<n<<" elemente"<<endl;
  }
  catch(...)
  {
  	cout<<" Error :: "<<exceptie.what()<<endl;
  }
  

	
 return 0;
}
