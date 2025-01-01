#include <iostream>
using namespace std;

int main(){
    short a,b,c,min;
    cin>>a>>b;
    cin>>c;
    min = b + c;

    a=a+min/60;
    b = min % 60;

    a = a % 24;

    cout<<a<<" "<<b<<endl;
}