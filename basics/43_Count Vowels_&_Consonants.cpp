#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    int v=0,c=0;
    cout<<"enter the string: ";
    getline(cin,a);
    for(int i=0;i<=a.length();i++){
        char r=tolower(a[i]);
        if(r=='a' || r=='e' || r=='i' || r=='o' || r=='u'){
            v++;
        }
        else{
            c++;
        }
    }
    cout<<v<<endl<<c;
    return 0;
}
