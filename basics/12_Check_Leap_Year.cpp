#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i;
    cout<<"enter the year: ";
    cin>>i;
    if(i%4==0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}
