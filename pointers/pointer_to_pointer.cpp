#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number: ";
    cin>>x;
    int *ptr=&x;
    int **tr=&ptr;
    cout<<**tr;
    return 0;
}
