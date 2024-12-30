#include <iostream>
using namespace std;

int main(){
    short h,m,d;
    cin>>h>>m;
    d = m - 45;

    if (d < 0){
        h = h - 1;
        m = 60 + d;
        if(h == -1){
            h = 23;
        }
    }
    else if (d==0){
        m = 0;
    }
    else{
        m = d;
    }
    cout<<h<<" "<<m<<endl;
}