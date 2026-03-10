#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    string username, password, fileUser, filePass;
    bool exists = false;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream read("users.txt");
    while (read >> fileUser >> filePass) {
        if (fileUser == username) {
            exists = true;
            break;
        }
    }
    read.close();

    if (exists) {
        cout << "Username already exists!\n";
    } else {
        ofstream write("users.txt", ios::app);
        write << username << " " << password << endl;
        write.close();
        cout << "Registration Successful!\n";
    }
}

void loginUser() {
    string username, password, fileUser, filePass;
    bool found = false;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream read("users.txt");
    while (read >> fileUser >> filePass) {
        if (fileUser == username && filePass == password) {
            found = true;
            break;
        }
    }
    read.close();

    if (found)
        cout << "Login Successful!\n";
    else
        cout << "Invalid Username or Password!\n";
}

int main() {
    int choice;

    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        registerUser();
    else if (choice == 2)
        loginUser();
    else
        cout << "Invalid choice";

    return 0;
}