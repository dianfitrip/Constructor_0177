#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
public:
	Mahasiswa() {
		nim = 0;
		nama = "";
	}
	Mahasiswa(int iNim) {
		nim = iNim;
	}
	Mahasiswa(string);
	Mahasiswa(int iNim, string iNama);
	void cetak();
};



