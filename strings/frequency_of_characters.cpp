#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"enter a string: ";
    getline (cin, s);
    for(int i=0;i<s.length();i++){
        if(s.find(s[i]) != i) continue;
        int count=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==s[i]){
                count++;
            }
        }
        cout<<s[i]<<" : "<<count<<endl;
    }
    return 0;
}
