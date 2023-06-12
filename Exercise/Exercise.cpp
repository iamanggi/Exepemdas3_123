#include <iostream>
using namespace std;

class bidangdatar {
private:
	int x;

public:
	bidangdatar() {
		x = 0;
	}
	virtual void input() {

	}
	virtual float Luas() {
		return 0;
	}
	virtual float Keliling() {
		return 0;
	}
	void setx(int a) {
		this->x = a;
	}
	int getx() {
		return x;
	}
};

class lingkaran :public bidangdatar {
public:
	void input() {
		cout << "Lingkarang dibuat" << endl;
		cout << "Masukkan jejari : ";
		int r;
		cin >> r;
		setx(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}

};

class bujursangkar :public bidangdatar {
public:
	void input() {
		cout << "Bujursangkar dibuat" << endl;
		cout << "Masukkan sisi : ";
		int S;
		cin >> S;
		setx(S);
	}

	float Luas(int S) {
		return S * S;
	}

	float Keliling(int S) {
		return 4 * S;
	}
};

int main() {
	bidangdatar* datar;
	lingkaran o;
	bujursangkar b;

	datar = &o;
	datar->input();
	cout << "luas lingkaran :" << o.Luas(o.getx()) << endl;
	cout << "keliling lingkaran :" << o.Keliling(o.getx()) << endl;

	datar = &b;
	datar->input();
	cout << "luas bujursangkar :" << b.Luas(b.getx()) << endl;
	cout << "keliling bujursangkar :" << b.Keliling(b.getx()) << endl;

	return 0;
}
