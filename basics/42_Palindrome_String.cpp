#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a,r;
    cout<<"enter the string: ";
    getline(cin,a);
    r=a;
    reverse(r.begin(),r.end());
    if (a==r){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}
