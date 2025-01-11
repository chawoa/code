#include<iostream>
#include<string>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    int re=0;
    string k,t;

    cin>>n>>k;

    for (int i=0; i<n; i++){
        t = k[i];
        re += stoi(t);
    }

    cout<<re<<"\n";
}