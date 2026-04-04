#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    cout<<"the array: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
