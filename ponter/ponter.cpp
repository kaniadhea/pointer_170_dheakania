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

	mahasiswa& ref = mhs;	//pointer reference refMhs
	ref.nim = 2;			//member acces operator 
	mhs.showNim();

	mahasiswa* pMhs = &mhs;		//pointer deference pMhs
	pMhs->nim = 3;				//Arrow operator 
	mhs.showNim();
	system("pause");


}