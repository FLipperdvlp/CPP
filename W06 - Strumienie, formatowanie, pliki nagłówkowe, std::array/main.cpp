#include <iostream>
using namespace std;

int main(){
    int choice;

        cout << "C++ version: " << __cplusplus;

    while(true){
        cout << "Options: " << endl;
        cout << "1 - Manipulatory strumieni" << endl;
        cout << "2 - Manipulatory strumieni" << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Manipulator       Zastosowanie\n"
                        << "setw(n)           Szerokość pola wyjściowego\n"
                        << "setprecision(n)   Precyzja wyświetlania liczb\n"
                        << "fixed             Stała liczba miejsc po przecinku\n"
                        << "setfill('0')      Wypełnianie pustych miejsc zerami\n"
                        << "left, right       Wyrównanie do lewej lub prawej\n"
                        << "boolalpha         Wyświetlanie true / false zamiast 1 / 0\n";
                break;
            case 2:
                cout << "Metoda            Znaczenie\n"
                        << "cin.fail()        Wystąpił błąd podczas wprowadzania danych\n"
                        << "cin.good()        Strumień jest w prawidłowym stanie\n"
                        << "cin.eof()         Osiągnięto koniec strumienia wejściowego\n"
                        << "cin.bad()         Wystąpił poważny błąd strumienia\n"
                        << "cin.clear()       Resetowanie flag błędów\n"
                        << "cin.ignore()      Ignorowanie znaków w strumieniu wejściowym\n";
                break;
        default:
            break;
        }
    }
}