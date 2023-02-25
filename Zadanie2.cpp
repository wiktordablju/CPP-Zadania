#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj cyfre: ";
    int cyfra;
    cin >> cyfra;

    switch (cyfra) {
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "2";
        break;
    case 3:
        cout << "3";
        break;
    case 4:
        cout << "4";
        break;
    case 5:
        cout << "5";
        break;
    case 6:
        cout << "6";
        break;
    case 7:
        cout << "7";
        break;
    default: {
        cout << "nie podano cyfry z zakresu 1-7";
    }
    }


    return 0;
}
