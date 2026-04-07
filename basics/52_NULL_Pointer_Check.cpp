#include <iostream>
using namespace std;
int main(){
    int *ptr = nullptr;
    if(ptr == nullptr){
        cout<<"the pointer is null, cannot dereference"<<endl;
        int x = 43;
        ptr = &x;
    }
    if(ptr != nullptr){
        cout<<"pointer not null, dereference: "<<*ptr;
    }
    return 0;
}
