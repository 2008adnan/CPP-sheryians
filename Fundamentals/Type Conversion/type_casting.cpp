#include<iostream>
using namespace std;
int main(){
    int b = 2;
    int a = 15;
    int ans = a/b; // int/int = int
    double ans2 = (double)a/b; // double/int = double
    cout << "ans: " << ans << endl;
    cout << "ans2: " << ans2 << endl;
    return 0;
}