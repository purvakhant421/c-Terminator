#include <iostream>
#include <string.h>

using namespace std;
bool containsUppercase(const string& password) {
    for (char c : password) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    try {
        if (!containsUppercase(password)) {
            throw runtime_error("Password must contain at least one uppercase letter.");
        }
        cout << "Password is valid." << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
