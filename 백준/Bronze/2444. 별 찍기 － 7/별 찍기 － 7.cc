#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n;
    cin>>n;

    for(int i=1; i<n+1; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<(i*2-1); j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<(i*2-1); j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}