#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter side a: ";
    cin>>a;
    cout<<"enter side b: ";
    cin>>b;
    cout<<"enter side c: ";
    cin>>c;
    if(a==b && b==c && c==a){
        cout<<"Equilateral";
    }
    else if (a==b || b==c || c==a){
        cout<<"Isosceles";
    }
    else{
        cout<<"Scalene";
    }
    return 0;
}
