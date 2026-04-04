#include <iostream>
using namespace std;
int main(){
    int a, r=0,b;
    cout<<"enter a number: ";
    cin>>a;
    b=a;
    while(b>0){
        int v =b%10;
        r=r*10+v;
        b/=10;
    }
    cout<<r;
    return 0;
}
