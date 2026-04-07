#include <iostream>
using namespace std;
int main() {
    int a, b;
    char o;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    cout<<"enter the operator: ";
    cin>>o;
    switch(o){
        case '+':cout<<a+b<<endl;
                 break;
        case '-':cout<<a-b<<endl;
                 break;
        case '/':cout<<a/b<<endl;
                 break;
        case '*':cout<<a*b<<endl;
                 break;
        default:cout<<"enter a correct operator";
    }
    return 0;
}
