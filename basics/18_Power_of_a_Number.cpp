#include <iostream>
using namespace std;
int main(){
    float base, exponent, result=1;
    cout<<"enter the base: ";
    cin>>base;
    cout<<"enter the exponent: ";
    cin>>exponent;
    for(int i=1;i<=exponent;i++){
        result*=base;
    }
    cout<<result;
    return 0;
}
