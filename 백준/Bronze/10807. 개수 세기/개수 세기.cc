#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,v,t;
    short count = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>t;
        arr[i]=t;
    }

    cin>>v;
    for (int i = 0; i<n; i++){
        if(v==arr[i]){
            count += 1;
        }
    }
    cout<<count<<"\n";
}