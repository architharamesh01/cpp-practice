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
    cout<<"enetr the element to search: ";
    cin>>s;
    for(i=0; i<n; i++){
        if(arr[i]==s){
            cout<<i;
            count++;
        }
    }
    if(count==0){
        cout<<"no element found";
    }
    
}
