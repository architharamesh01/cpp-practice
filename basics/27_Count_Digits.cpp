#include <iostream>
using namespace std;
int main(){
    int n,num,count=0;
    cout<<"enter a number: ";
    cin>>n;
    num=n;
    if(num==0){
        count = 1;
    }
    else{
        while(num>0){
        num/=10;
        count++;
        }
    }
    cout<<count;
    return 0;
}
