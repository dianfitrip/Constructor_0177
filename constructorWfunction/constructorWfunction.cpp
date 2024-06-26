#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*definisi function*/ }
	static int getNim() { return nim; /*definisi function*/ }

	Mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
	id = ++nim;
}

void Mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	Mahasiswa mhs1("Sri Dadi");
	Mahasiswa mhs2("Budi Jatmiko");
	Mahasiswa::setNim(9); //mengakses nim melalui static member function "setNim"
	Mahasiswa mhs3("Andi Janu");
	Mahasiswa mhs4("Joko Wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << Mahasiswa::getNim() << endl; //mengakses nim melalui static member function "getNim"
	system("pause");

	return 0;
}