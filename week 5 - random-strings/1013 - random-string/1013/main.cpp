#include <iostream>
#include <string>

using namespace std;

struct vehicle 
{
	char name[50];
	char plate[7];
	int HP;

};

struct student {
	string name;
	float atlagJegy;
};

int main() {

	vehicle v[5];
	for (int i = 0; i < 5;i++) {
		//jarmu neve
		cout << "Adja meg a(z) " << i + 1 << ". jarmu nevet";
		cin.getline(v[i].name, 50);

		int platelength = 0;
		char input[50];
		do {
			cout << "Adja meg a(z)" << i + 1 << ". jarmu rendszamat";
			cin.getline(input, 50);
			platelength = strlen(input);
		} while (platelength != 6);
		strcpy(v[i].plate, input);

		do {
			cout << "Adja meg a(z)" << i + 1 << ". jarmu HP-at";
			cin >> v[i].HP;
		} while (v[i].HP > 0 || v[i].HP <= 1000);
		cin.ignore();

	}
	cout << endl << "nev ----- rendszam ----- loero" << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << v[i].name << " ; " << v[i].plate << " ; " << v[i].HP << endl;
	}


	cout << endl;
	int strongestindex = 0;
	for (int i = 0; i < 5; i++) {
		if (strongestindex < v[i].HP) {
			strongestindex = i;
		}
	}
	cout << "Legtobb loero: " << v[strongestindex].name << " " << v[strongestindex].plate << " " << v[strongestindex].HP;
	//random

	//1.feladat
	srand((unsigned int)time(NULL));

	cout << rand() % 10 << endl;
	cout << rand() % 10 << endl;
	cout << rand() % 10 << endl;
	cout << rand() % 10 << endl;

	int min = 32;
	int max = 43;
	for (int i = 0; i < 100; i++) {
		cout << rand() % (max - min + 1) + min << endl;
	}
	//2.feladat
	int dobasok[1000] = {0};

	for (int i = 0; i < 1000; i++) {
		dobasok[i] = rand() % 6 - 1;
	}
	//dobasok atlaga
	int sum = 0;
	for (int i = 0; i < 1000; i++) {
		sum += dobasok[i];
	}

	//stringek
	string name1 = "Misi";
	string name2 = "Mokus";
	string joined = name1 + " " + name2;

	cout << name1 << endl;
	cout << name2 << endl;
	cout << joined << endl;

	string sentence;
	cout << "Adjon meg egy mondatot" << endl;
	getline(cin, sentence);
	cout << "A mondat hossza: " << sentence.size() << "karakter." << endl;
	cout << sentence.find("alma");

	//3.feladat

	student s[3];

	for (int i = 0; i < 3; i++) {
		cout << "Adja meg a nevet: " << endl;
		getline(cin, s[i].name);
		cout << "Adja meg az atlagot " << endl;
		cin >> s[i].atlagJegy;
		cin.ignore();
	}
	cout << endl;

	for (int i = 0; i < 3; i++) {
		cout << s[i].name << " ; " << s[i].atlagJegy << endl;
	}

	return 0;
}

