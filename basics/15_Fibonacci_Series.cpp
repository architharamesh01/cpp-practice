//Enter the number of terms in the Fibonacci series
#include <iostream>
using namespace std;
int main(){
    int i,a,b,temp,n;
    cout<<"enter a number: ";
    cin>>i;
    a = 1;
    b = 1;
    for(n=1;n<=i;n++){
        cout<<a<<endl;
        temp = b;
        b = a+b;
        a = temp;
    }
    return 0;
}

//Enter the limit up to which you want the Fibonacci series

#include <iostream>
using namespace std;
int main(){
    int i,a,b,temp;
    cout<<"enter a number: ";
    cin>>i;
    a = 1;
    b = 1;
    while (b<=i){
        cout<<a<<endl;
        temp = b;
        b=a+b;
        a=temp;
        a++;
    }
    return 0;
}
