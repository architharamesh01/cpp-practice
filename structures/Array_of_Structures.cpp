#include <iostream>
#include <string>
using namespace std;
struct student{
    int roll;
    string name;
    float mark;
};
int main(){
    int n,i;
    cout<<"enter the number of students: ";
    cin>>n;
    student s[n];
    for(i=0; i<n; i++){
        cout<<"enter the information of student "<<i+1<<" : "<<endl;
        cout<<"enter the roll no: ";
        cin>>s[i].roll;
        cin.ignore();
        cout<<"enter the name: ";
        getline(cin,s[i].name);
        cout<<"enter the mark: ";
        cin>>s[i].mark;
    }
    cout<<"____________________________________"<<endl;
    cout<<"student info: "<<endl<<endl;
    for(i=0;i<n;i++){
        cout<<"student "<<i+1<<" :"<<endl;
        cout<<"roll no: "<<s[i].roll<<endl;
        cout<<"name: "<<s[i].name<<endl;
        cout<<"mark: "<<s[i].mark<<endl<<endl;
    }
    return 0;
}
