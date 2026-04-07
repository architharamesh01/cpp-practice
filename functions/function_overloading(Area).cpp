#include <iostream>
#include <cmath>
using namespace std;
float calculateArea(float radius){
    return M_PI*radius*radius;
}
float calculateArea(float len, float bredth){
    return len*bredth;
}
int main(){
    float r,l,b;
    cout<<"enter the radius: ";
    cin>>r;
    cout<<"enter the lenght: ";
    cin>>l;
    cout<<"enter the breadth: ";
    cin>>b;
    cout<<"circle area: " <<calculateArea(r)<<endl;
    cout<<"rectangle area: "<<calculateArea(l,b);
    return 0;
}
