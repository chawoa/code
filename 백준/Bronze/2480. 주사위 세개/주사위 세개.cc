#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x,y,z;
    int m;

    cin>>x>>y>>z;

    if (x == y && y == z){
        cout<<10000+x*1000<<endl;
    }
    else if(x != y && x != z && y != z){
        m = max(max(x,y),z);
        cout<<m*100<<endl;
    }
    else{
        if(x==y || x==z){
            cout<<1000+x*100<<endl;
        }
        else if (y==z){
            cout<<1000+y*100<<endl;
        }
    }
}