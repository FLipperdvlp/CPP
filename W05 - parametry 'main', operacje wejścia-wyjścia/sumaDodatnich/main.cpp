#include <iostream>
using namespace std;

int main(){
    int tab[] = {-3, 5, 2, -7, 4, 0};
    int n = 6;
    int temp = 0;

    for(int i = 0; i < n; i++){
        if (tab[i] > 0){
            temp += tab[i];
        }
    }
    cout << temp;

    return 0;
}