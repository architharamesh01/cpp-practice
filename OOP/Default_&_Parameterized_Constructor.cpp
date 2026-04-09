#include <iostream>
using namespace std;
class rectangle{
    public:
    float len;
    float wid;
    rectangle(){
        len = 1;
        wid =1;
    }
    rectangle(float l, float w){
        len = l;
        wid = w;
    }
    void area(){
        cout<<"area: "<<len*wid;
    }
};
int main(){
    float l,w;
    cout<<"enter the length: ";
    cin>>l;
    cout<<"enter the width: ";
    cin>>w;
    rectangle r;
    r.area();
    return 0;
}
