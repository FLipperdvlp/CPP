#include <iostream>
#include <User.cpp>
using namespace std;

class Panel{
private:
    vector<User> users;
    hash<string> hash;
public:
    void Display_Menu() const{
        cout << "\n";
        cout << "  ====================================\n";
        cout << "              User Panel              \n";
        cout << "  ====================================\n";
        cout << "\n";
        cout << "    [1]  Register\n";
        cout << "    [2]  Log In\n";
        cout << "    [3]  Log Out\n";
        cout << "    [4]  User Panel\n";
        cout << "    [5]  Exit\n";
        cout << "\n";
        cout << "  ====================================\n";
        cout << "\n";
    } 

    void Register(const User& user){

    }
};

int main(){

}