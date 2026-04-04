#include <iostream>
using namespace std;
int main(){
    int num,n,r,p=0;
    cout<<"enter a number: ";
    cin>>num;
    n=num;
    while(n>0){
        r=n%10;
        p=p*10+r;
        n/=10;
    }
    if (num==p){
        cout<<"it is Palindrome";
    }
    else{
        cout<<"not a Palindrome";
    }
    return 0;
}
