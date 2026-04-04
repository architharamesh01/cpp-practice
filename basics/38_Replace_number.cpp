#include <iostream>
using namespace std;
int main(){
    int n,i,x,c;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    cout<<"enter the number to change: ";
    cin>>x;
    cout<<"enter the exchange number: ";
    cin>>c;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            arr[i]=c;
        }
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
   return 0;
   
}
