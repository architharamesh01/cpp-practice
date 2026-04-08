#include <iostream>
using namespace std;
int main(){
    int n,i,a;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    int *ptr=arr;
    cout<<"enter the position up to which you want the address: ";
    cin>>a;
    for(i=0;i<a;i++){
        cout<<"value: "<<*ptr<<endl;
        cout<<"address: "<<ptr<<endl;
        ptr++;
    }
    return 0;
}
