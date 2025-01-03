#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short a,b;

    while(cin>>a>>b){
        if(a > 0 && b < 10){
            cout<<a+b<<"\n";
        }
        else if(cin.eof()){
            break;
        }
    }
}