#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

	
class my
{
	int a;
  
public:

	void create() {
		cout << "a = ";
		cin >> a;
		cout << this->a << " created\n";
	}
	void show() { cout << " a= " << this->a << endl; }
	inline const int returnA()const { return this->a; }
};




int main()
{
	my *o = new my[100];

	int n, i = 0, size = 0;

    int Key;
    do
    {
    	    o[i].create();
			size += sizeof(o[i]);
			i++;
    	cout<<" Any key to continue OR ESC to Exit"<<endl;
	}while(_getch()!=27);
	
    n = i;
	
	for (int i = 0; i<n; i++) cout << " - obj(" << i + 1 << ")=" << o[i].returnA() << endl;

	cout << "size=" << size << endl;
	
	/// WRITE file RED 2020   
	ofstream ofs("red_text_.txt", ios::binary); // myfile.open("", ios::out|ios::binary);
	ofs.write(reinterpret_cast<char*>(o), size);
	ofs.close();

	/// READ file RED 2020
	ifstream ifs("red_text_.txt", ios::binary); // myfile.open("", ios::in|ios::binary);
	if (!ifs) { cout << "File not found"; return 1; }

	ifs.seekg(0, ifs.end); // setam informatia
	int len = ifs.tellg(); // obtinem lungimea informatiei
	ifs.seekg(0, ifs.beg); // setam fisierul la inceput

	int max = (len / sizeof(my));

	ifs.read(reinterpret_cast<char*>(o), 100); //
	ifs.close();

	for (int i = 0; i<max; i++) 
	cout << " - obj(" << i + 1 << ")=" << o[i].returnA() << endl;

	system("pause");
	
	return 0;
}


