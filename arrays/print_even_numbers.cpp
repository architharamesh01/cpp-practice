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
    cout<<"even numbers: ";
    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
   return 0;
   
}
