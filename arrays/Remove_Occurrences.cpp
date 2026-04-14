#include <iostream>
using namespace std;
int main(){
    int n, num,i,k=0,count=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++){
        cout<<"enter the input: ";
        cin>>arr[i];
    }
    cout<<"enter the element to delete: ";
    cin>>num;
    for(i=0;i<n;i++){
        if(arr[i]!=num){
            arr[k]=arr[i];
            k++;
        }
    }
    cout<<"current element: "<<endl;
    for (i=0;i<k;i++){
        cout<<arr[i]<<" ";
        count++;
    }
    cout<<endl<<"no.of elements: "<<count;
    return 0;
}
