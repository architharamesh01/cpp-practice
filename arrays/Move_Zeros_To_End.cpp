#include <iostream>
using namespace std;
int main(){
    int n,num,k=0,i;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the inputs: ";
        cin>>arr[i];
    }
    cout<<"enter the element to move to a end: ";
    cin>>num;
    for(i=0;i<n;i++){
        if(arr[i]!=num){
            swap(arr[k],arr[i]);
            k++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
