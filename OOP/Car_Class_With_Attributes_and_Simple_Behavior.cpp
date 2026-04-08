#include <iostream>
#include <string>
using namespace std;
class car{
    public:
    string make;
    string model;
    int year;
    
    void start_engine(){
        cout << year << " " << make << " " << model << " engine started" << endl;
    }
};
int main(){
    int n,i;
    cout<<"enter the no.of cars: ";
    cin>>n;
    car c[n];
    cin.ignore();
    for(i=0;i<n;i++){
        cout<<"input no."<<i<<" :"<<endl;
        cout<<"enter the make: ";
        getline(cin,c[i].make);
        cout<<"enter the model: ";
        getline(cin,c[i].model);
        cout<<"enter the year: ";
        cin>>c[i].year;
        cin.ignore();
    }
    for(i=0; i<n; i++) {
    c[i].start_engine();
}
    return 0;
}
