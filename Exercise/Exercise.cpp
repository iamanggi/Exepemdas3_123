#include <iostream>
using namespace std;

class BidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	BidangDatar() { // constructor 
		x = 0; 
	}
	virtual void input(int lingkaran, int bujursangkar) { //fungsi untuk menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		x = lingkaran;
		x = bujursangkar;
	}
	virtual float Luas(int a) { //fungsi untuk menghitung luas
		return 3.14 * a * a;
		return a * a;

		 return 0;
	} 
	virtual float keliling(int a) { // fungsi untuk menghitung keliling
		return 0; } 
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
		cout << "jari-jari : " << a << endl;
		cout << "sisi : " << a << endl;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class lingkaran :public BidangDatar {
public:
	void input() {
		cout << "lingkaran dibuat\n" << endl;
	}
};
class Bujursangkar :public BidangDatar {
public:
	void input() {
		cout << "Bujur sangkar dibuat\n" << endl;
	}
};
int main() {
	float jejari, sisi;
	cout << "Masukan jejari: ";
	cin >> jejari;


	cout << "\nMasukan sisi: ";
	cin >> sisi;

}