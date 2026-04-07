#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,c;
    cout<<"enter a string: ";
    getline (cin, s);
    cout<<"enter a string: ";
    getline (cin, c);
    if(s.find(c)!= -1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}
