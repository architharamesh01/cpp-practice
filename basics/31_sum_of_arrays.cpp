#include <iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<sum;
}
