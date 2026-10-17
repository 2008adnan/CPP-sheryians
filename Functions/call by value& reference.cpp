#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

void callbyvalue(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    std::cout << "After swapping: a = " << a << " b = " << b << std::endl;
}
void callbyreference(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    std::cout << "After swapping in callbyreference: a = " << a << " b = " << b << std::endl;
}
int main(){
    int a =5,b=3;
    callbyvalue(a, b);
    std::cout << "After call by value in main: a = " << a << " b = " << b << std::endl;
    callbyreference(a, b);
    std::cout << "After call by reference in main: a = " << a << " b = " << b << std::endl;
    return 0;
}
