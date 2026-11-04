//TODO: 1 - Napisz program, który sprawdza poprawność wprowadzonej liczby.

#include <iostream>
#include <limits>

using namespace std;

int main(){
    int liczba;
    cin >> liczba;

    if(cin.fail()){
        cout << "Błąd danych!";
    }else{
        cout << "Liczba = " << liczba;
    }

    return 0;
}

void task1(){
    int n;

    while (!(cin >> n)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Podaj poprawna liczbe: ";
    }

    cout << "Wpisano: " << n;
}