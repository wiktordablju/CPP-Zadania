#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
char ans;
char a, b, c, d, e;

void pytanie1(char ans) {
    cout << "Pytanie 1" << endl;
    cout << "Co zapisuje sie w incie" << endl;
    cout << "Odpowiedź A: liczby zmiennoprzecinkowe" << endl;
    cout << "Odpowiedź B: liczby calkowite" << endl;
    cout << "Odpowiedź C: tekst" << endl;
    cin >> ans;
    switch (ans) {
    case 'A':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    case 'B':
        cout << "Poprawna odpowiedź" << endl;
        break;
    case 'C':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    default:
        cout << "Niepoprawnia odpowiedz" << endl;
        break;
    }
    fstream plik;
    plik.open("wyniki.txt", ios::out);
    plik << "Pytanie 1: Odpowiedź:";
    plik << ans << endl;
    plik.close();
}
    
void pytanie2(char ans) {
    cout << "Pytanie2" << endl;
    cout << "Jakie są rodzaje pętli w cpp" << endl;
    cout << "Odpowiedź A: while, do while, for" << endl;
    cout << "Odpowiedź B: for, when, while" << endl;
    cout << "Odpowiedź C: do while, while case" << endl;
    cin >> ans;
    switch (ans) {
    case 'A':
        cout << "Poprawna odpowiedź" << endl;
        break;
    case 'B':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    case 'C':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    default:
        cout << "Niepoprawnia odpowiedz" << endl;
        break;
    }
    fstream plik;
    plik.open("wyniki.txt", ios::app);
    plik << "Pytanie 2: Odpowiedź:";
    plik << ans << endl;
    plik.close();
}

void pytanie3(char ans) {
    cout << "Pytanie 3" << endl;
    cout << "Co to inkrementacja" << endl;
    cout << "Odpowiedź A: zwiekszenie o 1" << endl;
    cout << "Odpowiedź B: zmniejszenie o 1" << endl;
    cout << "Odpowiedź C: dzialanie przez dzielenie" << endl;
    cin >> ans;
    switch (ans) {
    case 'A':
        cout << "Poprawna odpowiedź" << endl;
        break;
    case 'B':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    case 'C':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    default:
        cout << "Niepoprawnia odpowiedz" << endl;
        break;
    }
    fstream plik;
    plik.open("wyniki.txt", ios::app);
    plik << "Pytanie 3: Odpowiedź:";
    plik << ans << endl;
    plik.close();
}

void pytanie4(char ans) {
    cout << "Pytanie 4" << endl;
    cout << "Co oznacza znak !=" << endl;
    cout << "Odpowiedź A: nierownosc" << endl;
    cout << "Odpowiedź B: odejmowanie od poprzedniej zmiennej" << endl;
    cout << "Odpowiedź C: potegowanie" << endl;
    cin >> ans;
    switch (ans) {
    case 'A':
        cout << "Poprawna odpowiedź" << endl;
        break;
    case 'B':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    case 'C':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    default:
        cout << "Niepoprawnia odpowiedz" << endl;
        break;
    }
    fstream plik;
    plik.open("wyniki.txt", ios::app);
    plik << "Pytanie 4: Odpowiedź:";
    plik << ans << endl;
    plik.close();
}

void pytanie5(char ans) {
    cout << "Pytanie 5" << endl;
    cout << "Jakie rozszerzenie ma plik C+=" << endl;
    cout << "Odpowiedź A: .cpp" << endl;
    cout << "Odpowiedź B: .c" << endl;
    cout << "Odpowiedź C: .js" << endl;
    cin >> ans;
    switch (ans) {
    case 'A':
        cout << "Poprawna odpowiedź" << endl;
        break;
    case 'B':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    case 'C':
        cout << "Niepoprawna odpowiedź" << endl;
        break;
    default: 
        cout << "Niepoprawnia odpowiedz" << endl;
        break;
    }
    fstream plik;
    plik.open("wyniki.txt", ios::app);
    plik << "Pytanie 5: Odpowiedź:";
    plik << ans << endl;
    plik.close();
}

int main()
{
    
    cout << "Witaj w quizie";
    pytanie1(ans);
    cout << endl;

    pytanie2(ans);
    cout << endl;

    pytanie3(ans);
    cout << endl;

    pytanie4(ans);
    cout << endl;

    pytanie5(ans);
    cout << endl;

    

    return 0;
}
