//TODO: 1 - Wypisz liczbę rzeczywistą z dokładnością do dwóch miejsc po przecinku.
//TODO: 2 - Wyświetl liczby od 1 do 5 w polach o szerokości 5 znaków.
#include <iostream>
#include <iomanip>
using namespace std;

void precision(double &num){
    cout << "Wynik 1 zadania : " << fixed << setprecision(2) << num;
}

int main(){
    double num = 12.123456;
    precision(num);


    cout << "\nWynik 2 zadania: \n" ;
    for (int i = 0; i <=5; i++){
        cout << setw(5) << i << endl;
    }

    return 0;
}