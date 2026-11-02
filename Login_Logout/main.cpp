
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <limits>
#include "User.h"

using namespace std;

// TO RUN CODE
// g++ -std=c++17 main.cpp -o panel && ./panel

class Panel {
private:
    vector<User> users;
    hash<string> passwordHasher;
    int currentUserId = -1;

    User* FindUserById(int id) {
        for (User& user : users) {
            if (user.GetId() == id) {
                return &user;
            }
        }
        return nullptr;
    }

    const User* FindUserById(int id) const {
        for (const User& user : users) {
            if (user.GetId() == id) {
                return &user;
            }
        }
        return nullptr;
    }

public:
    void Display_Menu() const {
        cout << "\n";
        cout << "  ====================================\n";
        cout << "              User Panel              \n";
        cout << "  ====================================\n";
        cout << "\n";
        cout << "    [1]  Register\n";
        cout << "    [2]  Log In\n";
        cout << "    [3]  Log Out\n";
        cout << "    [4]  User Panel\n";
        cout << "    [5]  Display all users\n";
        cout << "    [6]  Exit\n";
        cout << "\n";
        cout << "  ====================================\n";
        cout << "\n";
    }

    void DisplayAllUsers() const {
        cout << "\n";
        cout << "  ====================================\n";
        cout << "              All Users               \n";
        cout << "  ====================================\n";

        if (users.empty()) {
            cout << "  No registered users.\n";
            return;
        }

        for (const User& user : users) {
            cout << "\n  ------------------------------------\n";
            user.Display();
            cout << "  ------------------------------------\n";
        }
    }

    void run() {
        int choice;

        do {
            Display_Menu();
            cout << "Enter your choice: ";

            if (!(cin >> choice)) {
                if (cin.eof()) {
                    break;
                }

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input!\n";
                continue;
            }

            switch (choice) {
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

                    cout << "\nEnter your age: ";
                    if (!(cin >> age) || age <= 0) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid age!\n";
                        break;
                    }

                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Enter password: ";
                    getline(cin, password);

                    if (password.empty()) {
                        cout << "Password cannot be empty!\n";
                        break;
                    }

                    size_t hashedPassword = passwordHasher(password);

                    users.emplace_back(
                        userid,
                        name,
                        surname,
                        age,
                        hashedPassword,
                        false
                    );

                    cout << "\nRegistration successful!\n";
                    cout << "Your User ID: " << userid << "\n";

                    break;
                }

                case 2:
                    break;

                case 3:
                    break;

                case 4: {
                    if (currentUserId == -1) {
                        cout << "Please log in first.\n";
                        break;
                    }

                    const User* user = FindUserById(currentUserId);

                    if (user == nullptr) {
                        currentUserId = -1;
                        cout << "Current user not found.\n";
                        break;
                    }

                    cout << "\n==========User Panel==========\n";
                    user->Display();
                    cout << "============================\n";

                    break;
                }

                case 5:
                    DisplayAllUsers();
                    break;

                case 6:
                    cout << "\nGoodbye!\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
                    break;
            }

        } while(choice != 6);
    }
};

int main() {
    Panel panel;
    panel.run();

    return 0;
}
