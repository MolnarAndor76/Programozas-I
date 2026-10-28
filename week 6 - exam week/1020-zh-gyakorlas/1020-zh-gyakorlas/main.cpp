#include <iostream>
#include <ctime>
#include <string>
using namespace std;

struct Player {
	string Name;
	int playTime;
	int goalCount;
};

int main() {

	srand((unsigned int)time(NULL));
	Player team[15];

	int memberCount;
	do {
		cout << "Adja meg a csapat letszamat: ";
		cin >> memberCount;
		cin.ignore();

	} while (!memberCount >= 5 && memberCount <= 15);

	for (int i = 0; i < memberCount; i++) {
		cout << "Add meg a(z)" <<memberCount+1 <<". jatekos nevet";
		getline(cin, team[i].Name);
		team[i].playTime = rand() % 91;
		team[i].goalCount = rand() % 6;
	}

	cout << endl << "Nev'\t'Jatekido'\t'Golok szama'\t'";

	for (int i = 0; i < memberCount; i++) {
		cout << team[i].Name << "'\t'" << team[i].playTime << "'\t'" << team[i].goalCount<< endl;
	}

	int osszesgol = 0;
	for (int i = 0; i < memberCount;i++) {
		osszesgol += team[i].goalCount;
	}

	cout << "Osszes gol = " << osszesgol << endl;

	int maxplaytimeIndex = 0;
	for (int i = 0; i < memberCount;i++) {
		if (team[maxplaytimeIndex].playTime < team[i].playTime) {
			maxplaytimeIndex = i;
		}
	}

	cout << "legtobbet jatszo jatekos: " << team[maxplaytimeIndex].Name<<endl;

	for (int i = 0; i < memberCount; i++) {
		if (team[i].playTime >= 45) {
			cout << team[i].Name << "'\t'" << team[i].playTime << endl;
		}
	}

	return 0;
}
