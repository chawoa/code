#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short a,b;

    while(true){
        cin>>a>>b;
        if(a == 0 && b == 0){
            break;
        }
        else{
            cout<<a+b<<"\n";
        }
    }
}