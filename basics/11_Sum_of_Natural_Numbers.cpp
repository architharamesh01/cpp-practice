#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum: "<<sum;
    return 0;
}
