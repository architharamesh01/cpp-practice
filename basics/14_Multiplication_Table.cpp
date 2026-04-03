#include <iostream>
using namespace std;
int main(){
    int multiplier, multiplicant, i;
    cout<<"enter the multiplier: ";
    cin>>multiplier;
    cout<<"enter the multiplicant: ";
    cin>>multiplicant;
    for(i=1;i<=multiplicant;i++){
        cout<<multiplier<<" x "<<i<<" = "<<i*multiplier<<endl;
    }
    return 0;
}
