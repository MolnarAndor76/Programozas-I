#include <iostream>

using namespace std;
struct StorageItem {
	int ID; // 3126
	char name[255]; // samsung monitor
	char Storage; // A, B, C
};

struct Student {
	char Name[50];
	int Grade;
	int BirthYear;
};

struct Hallgatok {
	int grades[3];
};

int main() {
	char line[4][60] = {};
	for (int i = 0; i < 4; i++)
	{
		cout << "sort" << endl;
		cin.getline(line[i], 60);
	}

	cout << endl;

	for (int i = 0;i < 4;i++) {
		for (int j = 0; j < strlen(line[i]);j++) {
			line[i][j] = tolower(line[i][j]);
		}
	}

	for (int i = 0; i < 4;i++) {
		cout << line[i] << endl;
	}

	int letter_count = 0;
	for (int i = 0;i < 4;i++) {
		for (int j = 0; j < strlen(line[i]);j++) {
			if (isalpha(line[i][j])) letter_count++;
		}
	}

	cout << "A betuk szama: " << letter_count;

	int line_length[4] = { 0 };
	for (int i = 0;i < 4; i++) {
		for (int j = 0; j < 60;j++) {
			if (line[i][j] == '\0'){
				break;
			}
			line_length[i]++;
		}
	}
	for (int i = 0; i < 4;i++) {
		cout << i + 1 << ", sor hossza: " << line_length[i] << endl;
	}

	//cin ignore -- cin clear
	int shouldReask = false;
	int num;
	do {
		shouldReask = false;
		cout << "szamot kerek: ";
		cin >> num;

		if (cin.fail()) {
			cout << "hibas adat!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			shouldReask = true;
		}
	} while (shouldReask);
	
	//ide kell
	cin.ignore();
	char text[30];
	cin.getline(text, 30);

	cout << num << endl << text << endl;
	return 0;

	//strukturak

	StorageItem item;
	item.ID = 1;
	strcpy_s(item.name , "Samsung monitor");
	item.Storage = 'A';

	StorageItem items[100];
	for (int i = 0; i < 100; i++) {
		items[i].ID = i;
		
		if (i % 2 == 0) {
			strcpy_s(items[i].name, "Samsung Monitor");
			items[i].Storage = 'A';
		}else {
			items[i].Storage = 'B';
			strcpy_s(items[i].name , " Dell Monitor");
		}
	}

	cout << item.name <<" ["<<item.ID<<"] " << item.Storage << endl;
	cout << items[15].name << " [" << items[15].ID << "] " << items[15].Storage << endl;
	cout << items[30].name << " [" << items[30].ID << "] " << items[30].Storage << endl;

	//Hallgatok

	int numOfStudents;
	bool shouldReAsk;
	
	do {
		//valtozok alaphelyzetbe allitasa
		shouldReAsk = false;
		//adat bekerese
		cout << "hany hallgato? ";
		cin >> numOfStudents;
		//hibas adat bekerese
		if (cin.fail()) {
			shouldReAsk = true;
			cin.clear();
			cin.ignore(1000, '\n');
		}

		//ujra bekerjuk
	} while (!(numOfStudents > 0 && numOfStudents <= 10));
	//extra sorokat toroljuk
	cin.ignore();
	float sumOfGrades = 0;
	int bestGrade = 0;
	int indexOfBestStudent;

	Student hallgatok[10];
	for (int i = 0; i < numOfStudents; i++) {
		cout << "Add meg a " << i + 1 << ". hallgato nevet";
		cin.getline(hallgatok[i].Name, 50);
		cout << " Add meg " << hallgatok[i].Name << " jegyet!" ;
		cin >> hallgatok[i].Grade;
		sumOfGrades += hallgatok[i].Grade;
		if (hallgatok[i].Grade > bestGrade) {
			bestGrade = hallgatok[i].Grade;
			indexOfBestStudent = i;
		}
		cin.ignore();
		cout << " Add meg " << hallgatok[i].Name << " szuletesi evet!";
		cin >> hallgatok[i].BirthYear;
		cin.ignore();
		
	}

	cout << endl << "Nev		Jegy		Szuletesi ev" << endl<<"-------------------------------" << endl;
	for (int i = 0; i < numOfStudents; i++) {
		cout << hallgatok[i].Name << "  " << hallgatok[i].Grade<< "   "<<hallgatok[i].BirthYear << endl;
	}

	cout << "A jegyek atlaga =" << sumOfGrades / numOfStudents << endl;
	cout << "A legjobb jegyet " << hallgatok[indexOfBestStudent].Name << " szerezte (" << bestGrade << ")" << endl;

	// feladat, a hallgatok szama nem haladhatja MEG A 20AT, sajat es osszesitett atlag iw kell

	int hallgatokSzama;
	cout << "hallgatok szama mennyi? ";
	cin >> hallgatokSzama;
	Hallgatok hall2[3];

	for (int i = 0; i < hallgatokSzama;i++) {
		for (int j = 0; j < 3;j++) {
			cout << "Adja meg az" << i + 1 << ". hallgato" << j + 1 << ". jegyet: ";
			cin >> hall2[i].grades[j];
		}
	}

	return 0;
}