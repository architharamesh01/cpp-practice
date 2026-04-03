#include <iostream>
using namespace std;
int main() {
    float p,r,t,a,total=1;
    cout<<"enter the Principal amount: ";
    cin>>p;
    cout<<"enter the Rate of interest: ";
    cin>>r;
    cout<<"enter the time in year: ";
    cin>>t;
    a = 1+(r/100);
    for (int i =1;i<=t;i++){
        total *= a;
    }
    cout<<p*total - p;
    return 0;
}
