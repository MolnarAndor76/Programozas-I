#include <iostream>

using namespace std;

int main() {

	//ismetles
	/*
	int x, y, z;
	cout << "Adj meg 3 szamot!" <<endl ;
	cin >> x;
	cin >> y;
	cin >> z;

	if (x > y && x > z) {
		cout << x << " a legnagyobb szam"<< endl;
	}
	else if (y > x && y > z) {
		cout << y << " a legnagyobb szam"<< endl;
	}
	else if (z > y && z > x) {
		cout << z << " a legnagyobb szam"<< endl;
	}
	else {
		cout << "Nincs legnagyobb szam"<< endl;
	}
	*/
	//for ciklusok
	for (int i = 0; i < 55;i+=2) {
		cout << i << "." << endl;
	}

	//1.f: paratlan szamok 1 es 100 kozott:
	cout << "1f: Paratlan szamok 1 es 100 kozott" << endl;
	for (int i = 1; i < 100; i += 2) {
		cout << i << "." << endl;
	}

	//2f: irassuk ki a felhasznalo altal megadott szorzotablat
	cout << "2.feladat szorzotabla" << endl;

	int f2;
	cout << "Adj meg szamot" << endl;
	cin >> f2;
	system("cls");
	if (f2 > 0 && f2 <= 10) {
		for (int i = 1; i < 11;i++) {
			cout << i << " * " << f2 << " = " << i * f2 << endl;
		}
	}
	//3f a*n for ciklussal
	cout << "3.feladat hatvanyozas" << endl;
	int f3a, f3n;
	cout << "Adj meg szamot" << endl;
	cin >> f3a;
	cout << "Adj meg hatvanyozo tenyezot" << endl;
	cin >> f3n;
	system("cls");
	int f3osszeg = f3a;
	for (int i = 1; i < f3n;i++) {
		f3osszeg *= f3a;
	}
	cout << "" << f3osszeg << endl;
	

	//4f fizz buzz
	cout << "4.feladat fizz buzz" << endl;
	for (int i = 0; i < 100;i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "fizzbuzz" << endl;
		}
		else if (i % 3 == 0) {
			cout << "fizz" <<endl;
		}
		else if (i % 5 == 0) {
			cout << "buzz" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	//5f bekert szam primszam?
	int f5;
	cout << "5.feladat\nszamot" << endl;
	cin >> f5;
	system("cls");
	int f5osztok = 0;
	for (int i = 1; i <= f5; i++) {
		if (f5 % i == 0) {
			f5osztok++;
		}
	}
	if (f5osztok > 2) {
		cout << f5 << " nem primszam"<<endl;
	}
	else {
		cout << "primszam" << endl;
	}
	//6f adott perioduson beluli primszamok kiiratasa
	cout << "6f: primszamok perioduson belul kiirni"<<endl;
	int f6;
	cout << "meddig vizsgal" << endl;
	cin >> f6;
	for (int j = 1; j <= f6; j++) {
		int f6osztok = 0;
		for (int i = 1; i <= j; i++) {
			if (j % i == 0) {
				f6osztok++;
			}
		}
		if (f6osztok > 2) {
			cout << j << " nem primszam" << endl;
		}
		else {
			cout << j << "primszam" <<endl;
		}
	}

	return 0;
}