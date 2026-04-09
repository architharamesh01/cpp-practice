#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int count=0,i;
    cout<<"enter a line: ";
    getline(cin,s);
    for(i =0;i<s.length();i++){
        if(s[i]!=' ' && i==0 || s[i-1]==' '){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}
