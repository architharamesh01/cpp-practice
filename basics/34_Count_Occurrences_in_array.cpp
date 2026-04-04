#include <iostream>
using namespace std;
int main(){
    int n,i,s,count=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    cout<<"Enter number to count: ";
    cin>>s;
    for(i=0; i<n; i++){
        if(arr[i]==s){
            count++;
        }
    }
    cout<<count;
    return 0;
}
