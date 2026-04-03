#include <iostream>
using namespace std;
int main(){
    int a,b,c,fact;
    cout<<"enter thr first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    c = min(a,b);
    for(int i=1;i<=c;i++){
        if(a%i==0 && b%i==0){
            fact=i;
        }
    }
    int lcm = (a*b)/fact;
    cout<<lcm;
    return 0;
}
/*Multiplication gives extra duplicates
GCD gives how much is duplicated
Divide will removes duplicates */
