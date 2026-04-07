#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<< "enter first no.: ";
    cin>>a;
    cout<< "enter second no.: ";
    cin>>b;
    cout<< "enter third no.: ";
    cin>>c;
    cout<<max(a,max(b,c));
    return 0;
}
