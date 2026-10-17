#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible to vote"<<endl;

    }else{
        cout << "ineligible to vote" << endl;
    
    }
    return 0;
}