#include <iostream>

using namespace std;

int main() {
//bemelegito feladat: bekerunk szamot, do-while ciklussal ellenorizzuk hogy 0< n < 26, vegul kiirjuk az angol abc annyi betujet, amennyit ker a felhasznalo
	int warmupNum;

	do {
		cout << "Adj meg egy szamot 1-tol 25-ig, es annyi betut irok ki az ABC-bol ";
		cin >> warmupNum;
	
	} while (warmupNum < 1 || warmupNum > 25);

	for (int i = 0; i <= warmupNum; i++) {
		cout << (char)('a' + i) << " ";
	}
	cout << endl;
	//tömbök
	int testArray[3] = { 1,2,3};
	cout << endl << "arrays:" << endl;
	//ha uresen hagyjuk akkor memoriacimeket/memoriaszemetet tarol
	for (int i = 0; i < sizeof(testArray) / sizeof(testArray[0]);i++) {
		cout << testArray[i];
	}
	cout << endl;
	//1.feladat 10 elemu tombot a felhasznalok altal adott szamokkal kell feltolteni
	int f1Array[10] = { 0 };
	//ha uresen hagyjuk akkor memoriacimeket/memoriaszemetet tarol
	for (int i = 0; i < sizeof(f1Array) / sizeof(f1Array[0]);i++) {
		cout << "Add meg a tomb " << i + 1 << ". elemét!" << endl;
		cin >> f1Array[i];
	}
	int f1maxIndex = 0;

	for (int i = 0; i < sizeof(f1Array) / sizeof(f1Array[0]);i++) {
		if (f1Array[f1maxIndex] <= f1Array[i]) {
			f1maxIndex = i;
		}
	}
	cout << "A legnagyobb elem: [" << f1maxIndex << "]: " << f1Array[f1maxIndex] << endl;

	int f1minIndex = 0;

	for (int i = 0; i < sizeof(f1Array) / sizeof(f1Array[0]);i++) {
		if (f1Array[f1minIndex] >= f1Array[i]) {
			f1minIndex = i;
		}
	}
	cout << "A kisebb elem: [" << f1minIndex << "]: " << f1Array[f1minIndex] << endl;

	float f1sum = 0;
	float f1count = sizeof(f1Array) / sizeof(f1Array[0]);
	for (int i = 0; i < sizeof(f1Array) / sizeof(f1Array[0]);i++) {
		f1sum += f1Array[i];
	}
	float f1AVG = f1sum / f1count;
	cout << "Az atlag = " << f1AVG << endl;

	//2. feladat osztalyzatok es mibol mennyi van a veletlenszeru tombben

	int f2grades[] = { 2,5,4,3,2,5,5,4,4,5 };
	float f2sum = 0;
	for (int i = 0; i < sizeof(f2grades) / sizeof(f2grades[0]);i++) {
		switch (f2grades[i]) {
		case 1: cout << "Elegtelen" << endl;
			break;
		case 2: cout << "Elegseges" << endl;
			break;
		case 3: cout << "Valtozo" << endl;
			break;
		case 4: cout << "Jo" << endl;
			break;
		case 5: cout << "Jeles" << endl;
			break;
		default: cout << "Helytelen ertek!" << endl;
			break;
		}
		f2sum += f2grades[i];
	}
	//szamoljunk atlagot
	/* 1.00-1.80 Elégtelen
	* 1.81-2.70 Elégséges
	* 2.71-3.60 Változó
	* 3.61-4.50 Jó
	* 4.51-4.75 Jeles
	* 4.76-5.00 Kitűnő
	*/
	float f2count = sizeof(f2grades) / sizeof(f2grades[0]);
	float f2avg = (float)(f2sum / f2count);
	cout << "Az atlag = " << f2avg << " - ";

	if (f2avg > 1.80 && f2avg < 2.71) {
		cout << "Elegseges" << endl;
	}
	else if (f2avg > 2.70 && f2avg < 3.61) {
		cout << "Valtozo" << endl;
	}else if(f2avg > 3.60 && f2avg < 4.51) {
		cout << "Jo" << endl;
	}
	else if (f2avg > 4.50 && f2avg < 4.76) {
		cout << "Jeles" << endl;
	}
	else if (f2avg > 4.75 && f2avg < 5.01) {
		cout << "Kituno" << endl;
	}
	else {
		cout << "Elegtelen" << endl;
	}
	//3.feladat parkolohelyek tombje: "F"-foglalt, "S"-szabad. Hany szabad es hany foglalt hely van?
	char f3parkolok[] = { 'F','S','F','S','S','S','F','S','F'};
	int free = 0, taken = 0;
	for (int i = 0; i < sizeof(f3parkolok) / sizeof(f3parkolok[0]);i++) {
		if (f3parkolok[i] == 'F') {
			taken++;
		}
		else {
			free++;
		}
	}

	cout << "Foglalt helyek szama: " << taken << endl << "Szabad helyek szama: " << free << endl << "Osszesen: " << taken + free << " hely van a parkoloban."<<endl;
	

return 0;
}