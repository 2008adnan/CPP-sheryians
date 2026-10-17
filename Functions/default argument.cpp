#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

int add(int a=9,int b=7){ //agr user does not provide the second argument, it will default to 7
    return a+b;                     //isliye default value is always provided from right to left
    //i.e. pehle b ko default value milega, phir a ko milega
} 
int main(){
    int result = add(5,6);//if user does not provide the first argument, it will default to 9
    std::cout << "Result: " << result << std::endl;
    return 0;
}
