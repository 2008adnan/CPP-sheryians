#include <iostream>
using namespace std;

int main() {
    int i =10;
    double d = i; //automatic - Implicit type conversion
    cout << "value: " << i << endl;

    double d1 = 10.5;
    int i1 = d1;   //data loose 
    cout << "value: " << i1 << endl;

    int i3 = (int)d1; //explicit type conversion
    cout << "value: " << i3 << endl;

    int i2 = static_cast<int>(d1); //explicit type conversion
    cout << "value: " << i2 << endl;

    return 0;
}