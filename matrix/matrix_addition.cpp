#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter thr number of row: ";
    cin>>r;
    cout<<"enter the no.of column: ";
    cin>>c;
    int a[r][c];
    int b[r][c];
    int t[r][c];
    cout<<"enter first matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"row "<<i<<" & colume "<<j<<" : ";
            cin>>a[i][j];
        }
    }
    cout<<"enter the second matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"row "<<i<<" & colume "<<j<<" : ";
            cin>>b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            t[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
