#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter thr number of row: ";
    cin>>r;
    cout<<"enter the no.of column: ";
    cin>>c;
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"row "<<i<<" & colume "<<j<<" : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
