#include <iostream> // include the input-output stream library for cin and cout
using namespace std; // use the standard namespace to avoid writing std:: constantly

int main()
{
	//1.feladat
	double x, y, z;
	cout << "1.feladat\nAdd meg a haromszog x, y, es z oldalat." << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	double felszin = 2 * (x * y + x * z + y * z);
	double terfogat = x * y * z;

	cout << "A teglatest felszine= " << felszin << ", terfogata= " << terfogat << endl;
	//
	// if elagazasok
	//

	//2.feladat
	int f1;
	cout << "2.feladat\nAdj meg egy egesz szamot: " << endl;
	cin >> f1;

	if (f1 < 10) {
		cout << "A szam kisebb mint 10"<< endl;
	}
	else {
		if (f1 == 10) {
			cout << "A szam egyenlo 10-el" << endl;
		}
		else if(f1 == 11){
			cout << "A szam egyenlo 11-el" << endl;
		}
		else {
			cout << "A szam nagyobb mint 10" << endl;
		}
	}

	//
	// switch elagazasok
	//

	switch (f1) {
	case 10: 
		cout << "f1= " << f1 << endl;
		break; //kell, mert ezzel lép ki a switchbol
	case 11:
		cout << "f1= " << f1 << endl;
		break;
	default:
		cout << "default" << endl;
		break;
	}

	//3.feladat
	float a, b;
	char op;
	cout << "3.feladat\nAdd meg az \"a\"-t es a \"b\"-t" << endl;
	cin >> a;
	cin >> b;
	cout << "Add meg a muveleti operatort" << endl;
	cin >> op;

	switch (op) {
	case '+':
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	case '-':
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	case '*':
		cout << a << " * " << b << " = " << a * b << endl;
		break;
	case '/':
		if (b != 0) {
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else {
			cout << "0-val valo osztas nem lehetseges!" << endl;
		}
		break;
	default:
		cout << "default" << endl;
		break;
	}
	//4.feladat
	int f4, f4divider;
	cout << "4.feladat\nAdj meg egy egesz szamot" << endl;
	cin >> f4;
	cout << "Adj meg egy osztot" << endl;
	cin >> f4divider;
	if (f4 % f4divider == 0) {
		cout << "A szamunk oszthato "<<f4divider <<"-el" << endl;
	}
	else {
		cout << "A szamunk nem oszthato " << f4divider << "-el" << endl;
	}


	
	return 0;
}