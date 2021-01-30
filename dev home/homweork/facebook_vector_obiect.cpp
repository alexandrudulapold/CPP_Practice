#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
		
	vector <int> vArray1;
	vector <int> vArray2(30);
	vector <int> vArray3(30,10);
	
	////vArray1.
	
	cout << "Size Vector " << vArray2.size() << endl;
	cout << "Capacity Vector " << vArray2.capacity() << endl;
	cout << "Max_Size Vector " << vArray2.max_size() << endl;
	cout<<endl;
	
	for (int x=0;x<40;x++) vArray2.push_back(999);
	cout << "Size Vector " << vArray2.size() << endl;
	cout << "Capacity Vector " << vArray2.capacity() << endl;
	cout << "Max_Size Vector " << vArray2.max_size() << endl;
	
	/// test red
	
	vector <int> vVec;
	cout <<" vVec.size() - "<<vVec.size() << endl; //vVec[x] << endl;
	for (int x=0;x < vVec.size();x++)
	cout <<" vVec.size() - "<<vVec.size() << vVec[x] << endl;
	vVec.assign(3,2);
	for (int i=0;i < vVec.size();i++)
	cout <<" "<< vVec[i] << endl;
	
	// copierea vectorilor
	
	vArray1=vVec;
	for (int i=0;i < vArray1.size();i++)
	cout <<"xxx "<< vArray1[i] << endl;
	
	/*
	int V[100];
	for (int i=0;x < 1;i++)
	cout <<" "<< V[i] << endl;
	*/
	
	vVec.push_back(666);
	for (int x=0;x < vVec.size();x++)
	cout <<"-"<< vVec[x] << endl;
	cout<<endl;
	
	cout << vVec.front() << " - " << vVec.back() << endl;
	vVec.pop_back();
	for (int x=0;x < vVec.size();x++)
	cout <<"pop_back "<< vVec[x] << endl;
	
	vVec.insert(vVec.begin(),25);
	for (int x=0;x < vVec.size();x++)
	cout <<"insert +25--"<< vVec[x] << endl;
	cout<<endl;
	
	//*(p+i)
	
	vVec.insert(vVec.begin()+3,33);
	for (int x=0;x < vVec.size();x++)
	cout <<"insert +33--"<< vVec[x] << endl;
	cout << "\n Capacity Vector " << vVec.capacity() << endl;
	vVec.resize(12);
	cout << "\n Capacity Vector " << vVec.capacity() << endl;
	for (int x=0;x < vVec.size();x++)
	cout <<"---"<< vVec[x] << endl;
	vVec[10]=123;
	cin>>vVec[12];
	for (int x=0;x <18;x++)
	cout <<"resize "<< vVec[x] << endl;
return 0;
}
