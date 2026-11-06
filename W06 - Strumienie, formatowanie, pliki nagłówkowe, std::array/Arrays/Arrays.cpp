//TODO: Utwórz tablicę pięciu liczb i oblicz sumę jej elementów.

#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 5> tab = {1, 2, 3, 4, 5};

    int suma = 0;

    for(int x : tab){
        suma += x;
    }

    cout << "Suma: " << suma << "\n";
    cout << "Rozmiar: " << tab.size() << "\n";
    
    cout << "C++ version: " << __cplusplus;


    return 0;
}