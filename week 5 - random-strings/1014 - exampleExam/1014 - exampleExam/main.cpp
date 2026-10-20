#include <iostream>
#include <string>

using namespace std;

struct team {
	string name;
	int time;
	int goals;

};

int main() {

	int playerAmount ;

	do {
		cout << "Adja meg a jatekosok szamat (5-12)" << endl;
		cin >> playerAmount;
	} while (playerAmount < 5 || playerAmount > 12);
	cin.ignore();

	team ourTeam[12];
	srand((unsigned int)time(NULL));
	int min = 0;
	int max = 60;

	for (int i = 0; i < playerAmount; i++) {
		cout << "Adja meg a jatekos nevet: ";
		getline(cin, ourTeam[i].name);
		ourTeam[i].time = rand() % (max - min + 1) + min;
		int golokszama;
		do {
			cout << "Adja meg a golok szamat (0-5)";
			cin >> golokszama;
		} while (golokszama < 0 || golokszama > 5);
		ourTeam[i].goals = golokszama;
		cin.ignore();
	}


	cout << endl << "Jatekos neve\tjatekido\tgolszam" << endl;
	int goalSum = 0;
	int goalScorers = 0;
	int maxTimeIndex = 0;
	for (int i = 0; i < playerAmount; i++) {
		cout << ourTeam[i].name << "\t" << ourTeam[i].time << " perc\t" << ourTeam[i].goals <<" gol" << endl;
		goalSum += ourTeam[i].goals;
		if (ourTeam[maxTimeIndex].time < ourTeam[i].time) {
			maxTimeIndex = i;
		}
		if (ourTeam[i].goals > 0) goalScorers++;
		if (ourTeam[i].time > 19) {
		
		}
	}

	cout << endl << "A csapat osszesen " << goalSum << " golt lott" << endl;
	cout << "A legtobbet " << ourTeam[maxTimeIndex].name << " jatszotta, es " << ourTeam[maxTimeIndex].goals << " golt lott!" << endl << goalScorers << "-en lottek legalabb egy golt" << endl;
	
	cout << "Akik 20 percnel tobbet jatszottak:" << endl;
	for (int i = 0; i < playerAmount; i++) {
		if (ourTeam[i].time > 19) {
			cout << ourTeam[i].name <<"\t" << ourTeam[i].time << " perc" << endl;
		}
	}

	return 0;
}