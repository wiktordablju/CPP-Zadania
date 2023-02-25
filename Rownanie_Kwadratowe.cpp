#include <iostream>
#include <cmath>
using namespace std;

int  a, b, c, wybor;
float delta, x, x1, x2, x0;

int main()
{
	

	cout << "Podaj liczby" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	delta = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	x0 = -b/(2*a);

	cout << "Wybierz czy liczyc rownanie liniowe czy kwadratowe(1-liniowe 2-kwadratowe): ";
	cin >> wybor;
	switch (wybor) {
	case 1:
		if (a == 0 && b == 0) {
			cout << "rowananie ma nieskonczenie wiele rozwiazan";
		}
		else { 
			if (a == 0 && b != 0) {
				cout << "brak rozwiazan";
			}
			else {
				if (a != 0 && b != 0)
					x = -b / a;
				cout << "x = " << x;
			}
		}
		break;
		
	case 2:
		if (delta >= 0) {
			if (delta > 0) {
				cout << "delta wynosi " << delta << endl;
				cout << "x1 wynosi " << x1 << endl;
				cout << "x1 wynosi " << x2 << endl;
			}
			else {
				cout << "delta wynosi " << delta << endl;
				cout << "x0 wynosi " << x0 << endl;
			}
		}
		else {
			cout << "Delta jest mniejsza 0" << endl;
		}
		break;
	
	default:
		cout << "Nie podano odpowiedniej liczby";
	}

	return 0;
}
