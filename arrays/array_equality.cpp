#include <iostream>
using namespace std;
int main(){
    int n,i,no,j,count1=0,count2=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr1[n];
    for(i=0; i<n; i++){
        cout<<"enter the number: ";
        cin>>arr1[i];
        count1++;
    }
    cout<<"enter the size of the array: ";
    cin>>no;
    int arr2[no];
    for(j=0; j<no; j++){
        cout<<"enter the number: ";
        cin>>arr2[j];
        count2++;
    }
    if(count1==count2){
        for(i=0; i<n; i++){
            for(j=0; j<no; j++){
                arr1[i]==arr2[j];
            }
        }
        cout<<"both are equal";
    }
    else{
        cout<<"not equal";
    }
   return 0;
   
}
