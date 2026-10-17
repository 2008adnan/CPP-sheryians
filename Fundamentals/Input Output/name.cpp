#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;
    cin>> age;
    cin.ignore(); // to ignore the newline character left in the input buffer
    getline(cin, name); // to read the full name including spaces
    cout << "Your age is : " << age << endl;
    cout << "Your name is : " << name << endl;
    return 0;
}