//TODO: Wypisz liczbę rzeczywistą z dokładnością do dwóch miejsc po przecinku.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num = 12.123456;

    cout << fixed << setprecision(2);

    return 0;
}