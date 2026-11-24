#include <iostream>
#include <format>
#include <print>
using namespace std;

int main() {
    int wiek = 18;
    double ocena = 4.567;

    string tekst = format("Wiek: {}", wiek); //** format = Formatuje tekst i zwraca std::string */
    cout << tekst << '\n';

    print("Ocena: {:.2f}\n", ocena); //** print = Formatuje i od razu wypisuje tekst */
}
