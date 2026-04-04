#include <iostream>
using namespace std;
int main(){
    int n,i,temp;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    temp = arr[n-1];
    arr[n-1] = arr[0];
    arr[0] = temp;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
   return 0;
   
}
