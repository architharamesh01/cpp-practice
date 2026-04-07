#include <iostream>
using namespace std;
int main(){
    int dividend, divisor;
    cout<< "enter the dividend: ";
    cin>>dividend;
    cout<< "enter the divisor: ";
    cin>> divisor;
    cout<<"quotient: "<<dividend/divisor<<endl<<"remainder: "<<dividend%divisor;
    return 0;
}
