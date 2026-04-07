#include <iostream>
using namespace std;
int main(){
    char alp;
    cout<<"enter a alphabet: ";
    cin>>alp;
    if(alp>= 'A' && alp<='Z'){
        alp+=32; // adding 32 coverts caps into small letter
    }
    if(alp>= 'a' && alp<='z'){
        if (alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' ){
            cout<<"vowel";
        }
        else{
            cout<<"consonant";
        }
    }
    else{
        cout<<"not an alphabet";
    }
    return 0;
}
