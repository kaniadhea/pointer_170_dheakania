#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();		//deklarasi method 
};


void mahasiswa::showNim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl; 
}

int main()
{
	mahasiswa mhs{ 1 };		//objek mhs
	mhs.showNim();			//member acces operator 

	mahasiswa 
}