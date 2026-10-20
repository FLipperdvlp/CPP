#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <limits>
#include "User.h"
using namespace std;
//g++ -std=c++17 main.cpp -o panel./panel
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

    void run(){
        int choice;
        do{
            Display_Menu();
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1: {
                int userid = static_cast<int>(users.size()) + 1;  
                string name, surname;
                double age;
                string password;

                cout << "==========Register==========\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter your name: ";
                getline(cin, name);

                cout << "\nEnter your surname: ";
                getline(cin, surname);

                cout << "\nEntner your age: ";
                cin >> age;
                
                cout << "Enter password: ";
                getline(cin, password);

                size_t hashedPassword = hash(password);

                users.emplace_back(userid, name, surname, age, hashedPassword, false);

                cout << "\nRegistration successful!" << endl;
                break;
            }
            case 2:
                break;

            case 3:
                break;

            case 4:
                break;
            
            case 5:
                break;

            default:
                break;
            }
        }while(choice != 5);
    }
};

int main(){
    Panel panel;

    panel.run();

    return 0;
}