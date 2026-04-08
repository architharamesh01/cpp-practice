//enum - gives name to numbers
#include <iostream>
#include <string>
using namespace std;
enum day{
    sunday,
    monday,
    tueday,
    wednesday,
    thursday,
    friday,
    saturday
};
int main(){
    day d;
    d = wednesday;
    cout<<d;
    return 0;
}
