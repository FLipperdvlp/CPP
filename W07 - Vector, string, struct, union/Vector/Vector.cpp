//TODO: Wczytaj N liczb do wektora, a następnie wypisz ich sumę.
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    vector<int> numbers;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        numbers.push_back(x);
    }

    int suma = 0;
    for(int x : numbers){
        suma += x;
    }

    cout << "SUMA: " << suma;

    return 0;
}