#include <iostream>
using namespace std;

int main() {
    char c = 'a'; 
    int nallu = 'd';
    cout << "ASCII value of " << c << " is: " << (int)c << "\n";
    cout << "ASCII value of d is: " << nallu << endl;

    //if doing arithmetic operation with char and char or char and int, then char will be converted to int automatically
    char c1 = 'a'; //97
    char c2 = 'b'; //98
    cout << "a+b =" << c1+c2 << endl;

    cout <<"b+1 = " << c2+1 << endl;

    cout << "a+'4' = " << c1+'4' <<endl;


    return 0;
}