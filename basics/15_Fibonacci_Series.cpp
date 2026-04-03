#include <iostream>
using namespace std;
int main(){
    int i,a,b,temp,n;
    cout<<"enter a number: ";
    cin>>i;
    a = 1;
    b = 1;
    for(n=1;n<=i;n++){
        cout<<a<<endl;
        temp = b;
        b = a+b;
        a = temp;
    }
    return 0;
}
