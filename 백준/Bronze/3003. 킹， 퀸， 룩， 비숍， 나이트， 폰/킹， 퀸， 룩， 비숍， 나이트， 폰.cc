#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short c[6]={1,1,2,2,2,8};
    short t;

    for(int i=0; i<6; i++){
        cin>>t;
        c[i] -= t;
    }

    for(int i=0; i<6; i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
}