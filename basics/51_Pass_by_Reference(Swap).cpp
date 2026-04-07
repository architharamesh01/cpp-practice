#include <iostream>
using namespace std;
/*void because ur not returning anything
& because It is the same as original variable*/
void r(int &x, int &y){
    x = y+x;
    y=x-y;
    x=x-y;
}
int main(){
    int a,b;
    cout<<"enter the first no.: ";
    cin>>a;
    cout<<"enter the second no.: ";
    cin>>b;
    r(a,b);
    cout<<"first number: "<<a<<endl;
    cout<<"second number: "<<b;
    return 0;
}
