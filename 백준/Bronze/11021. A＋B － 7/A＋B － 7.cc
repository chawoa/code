#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n,a,b;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>a>>b;
        cout<<"Case #"<<i+1<<": "<<a+b<<"\n";
    }
}