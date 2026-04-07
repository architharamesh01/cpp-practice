#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char r;
    int c=0;
    cout<<"enter a string: ";
    getline (cin,s);
    cout<<"enter the character: ";
    cin>>r;
    for(int i=0;i<s[i];i++){
        if (s[i]==r){
            c++;
        }
    }
    cout<<c;
    return 0;
}
