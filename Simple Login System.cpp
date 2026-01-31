#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if(username == "admin" && password == "123")
        cout << "Login successful";
    else
        cout << "Login failed";

    return 0;
}
