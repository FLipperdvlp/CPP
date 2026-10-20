#include <iostream>
#include <string>
using namespace std;

class User{
private:
    int UserId;
    string Name;
    string Surname;
    double Age;
    unsigned long HashPassword;
    bool IsLogedIn;
public:
    User(const int userId, const string& name, const string& surname, const double age, const unsigned long hashpassword, bool isLogedIn) : 
        UserId(userId), Name(name), Surname(surname), Age(age), HashPassword(hashpassword), IsLogedIn(isLogedIn) {}

    int GetId() const{
        return UserId;
    }

    string GetName() const{
        return Name;
    }

    string GetSurname() const {
        return Surname;
    }

    bool GetBool() const {
        return IsLogedIn;
    }

    double GetAge() const {
        return Age;
    }

    void SetName(const string& name){
        Name = name;
    }

    void SetSurname(const string& surname){
        Surname = surname;
    }

    void SetAge(const double age){
        Age = age;
    }
};