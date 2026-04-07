#include <iostream>
using namespace std;
int main(){
    int i, n=1, fact;
    cout<<"enter a number: ";
    cin>>i;
    while (n<=i){
        fact*=n;
        n++;
    }
    cout<<fact;
    return 0;
}
