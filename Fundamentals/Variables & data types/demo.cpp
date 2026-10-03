#include <iostream>
using namespace std;

int main(){
    std::cout << "Hello, World\n";  //when we don't write - using namespace std;
    cout << "Nalla giri" << endl; //buffer flushed immediately and new line is given...both happens with endl
    cout << "Hello, DUniya\n"; //when we use - using namespace std;
    return 0;
}