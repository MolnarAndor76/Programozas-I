#include <iostream>

using namespace std;

bool ShouldClose() {
	return true; // Példa: azonnal leáll
}

int main()
{
	//ismetlo feladat:
	int f0num;
	int f0sum = 0;
	int f0oddSum = 0;
	cout << "Adj meg egy szamot" << endl;
	cin >> f0num;
	for (int i = 1; i < f0num; i++) {
		if (i % 2 == 0) {
			f0sum += i;
		}
		else {
			f0oddSum += i;
		}
	}

	cout << "A " << f0num << "-ig levo paros szamok osszege: " << f0sum << ", a paratlan szamok osszege: " << f0oddSum << endl;
	//eloltesztelos ciklusok -- while
	int _i = 10;
	while (_i > 0) {
		cout << _i << endl;
		_i--;
	}

	//hatultesztelos ciklusok -- do-while -- egyszer mindenféleképpen lefut, és csak UTÁNA nézi meg a feltételt
	int _min = 0;
	int _n;
	do {
		cout << "Adj meg egy " << _min << "-nal NAGYOBB szamot: ";
		cin >> _n;
		if (_n <= _min) {
			cout << "Nem megfelelo szam!" << endl;
		}
	} while (_n <= _min);


	while (!ShouldClose()) {
		//render loop
		//Parancs végrehajtás
	}

	cout << "A szam negyzete: " << _n * _n << endl;

	//ASCII --> int --> ASCII
	char _c;
	cout << "Adj meg egy karaktert: ";
	cin >> _c;

	cout << "A megadott karakter: " << _c << " (ASCII ertek: "<<(int)_c<<")" << endl;

	int _asciiCode;
	cout << "Add meg a karakter ASCII kodjat: ";
	cin >> _asciiCode;

	cout << "A megadott ASCII ertek: " << _asciiCode << " ,a karakter: " << (char)_asciiCode << endl;

	//1.feladat: for ciklussal abc betuit irassuk ki
	int f1StartPos = (int)'a';
	int f1EndPos = (int)'z';

	for (int i = f1StartPos; i <= f1EndPos; i++) {
		cout << (char)i << endl;
	}

	//2. feladat: egy szam hanyszor oszthato kettovel
	int f2;
	int f2divided = 0;
	cout << "Kerek egy szamot! ";
	cin >> f2;
	while (f2 % 2 == 0) {
		f2divided++;
		f2 /= 2;
	}
	cout << "A " << f2 << " " << f2divided << "-szor/szer oszthato kettovel." << endl;

	return 0;
}