#include <iostream>

using namespace std;

int main() {
	int test[5][5] = { {0,1,2,3,4}, 
					   {0,1,2,4,5},
					   {3,5,6,4,2},
					   {3,6,6,7,5},
					   {0,1,2,3,4} };

	//cout << "test[3][0] = " << test[3][0] << endl;
	//cout << "test[3][0] = " << test[3][1] << endl;
	//cout << "test[3][0] = " << test[3][2] << endl;
	//cout << "test[3][0] = " << test[3][3] << endl;
	//cout << "test[3][0] = " << test[3][4] << endl;
	int line;
	do {
		cout << " Kerek egy sorszamot" << endl;
		cin >> line;
	} while (line >= 5 || line < 0);

	for (int i = 0; i < 5;i++) {
		cout << "test["<<line<<"][" << i << "] = " << test[3][i] << endl;
	}

	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 5; j++) {
			cout << "test["<<i<<"]["<<j<<"] = " << test[i][j] << " ";
		}
		cout << endl;
	}
	//tömb feltöltése:
	/*
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j < 5; j++) {
			cout << "test[" << i << "][" << j << "] erteket kerem ";
			cin >> test[i][j];
		}
		cout << endl;
	}*/

	//2x7 tomben felhasznalo homersekletet ad meg lehet tomb is majd kiiratjuk tablazatosan es kiszamoljuk az atlagat

	float T_Array[2][7];
	float weekAvg[2];
	for (int i = 0; i < 2;i++)
	{
		for (int j = 0; j < 7;j++) {
			cout << "Kerem a " << i+1 << ". het " << j+1 << "]. napjanak homersekletet ";
			cin >> T_Array[i][j];
			weekAvg[i] += T_Array[i][j];
		}
		cout << endl;
	}

	//Tablazat kiiratasa
	cout << endl;
	cout << "Het Ke Sze Csu Pen Szo Vas" << endl;
	for (int i = 0;i < 2;i++) {
		for (int j = 0; j < 7;j++) {
			cout << T_Array[i][j]<< " ";
		}
		cout << endl<<"Heti atlag = "<<weekAvg[i]/7<<endl;
	}
	//char arrays
	char name[] = {'J','a','n','o','s',' ','E','l','e','k',0};//<--- nulla KELL a vegere
	char name0[] = "janos elek";
	char name2[30];
	cout << "Adja meg a nevet: ";
	cin.getline(name, 30);

	cout << name2 << endl;
	cout << (char)toupper ('a') << endl;
	cout << (char)tolower ('A') << endl;
	for (int i = 0; i < 30; i++) {
		cout << "name[" << i << "] = " << name[i] << endl;

		if (isalpha(name2[i]))
		{
			cout << "name[" << i << "] = betu" << endl;
		}
		else if (isdigit(name2[i])) {
			cout << "name[" << i << "] = szam" << endl;
		}
		else if (isspace(name2[i])) {
			cout << "name[" << i << "] = szokoz" << endl;

		}
		else {
			cout << "name[" << i << "] = random" << endl;
		}
	}

	// lezaras -- gyakorlas
	char array[4][60];
	for (int i = 0; i < 4;i++) {
		cin.getline(array[i], 60);
	}
	cout << endl;

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < strlen(array[i]);j++) {
			array[i][j] = toupper(array[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		int line_length = 0;
		for (int j = 0; j < 60; j++) {
			if (array[i][j] == 0) {
				break;
			}
			line_length++;
		}

		cout << array[i] << " (sor hossza: " << line_length << endl;
	}

	int whitespace = 0;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < strlen(array[i]);j++) {
			if (isspace(array[i][j])) { whitespace++; }
		}
	}

	return 0;
}