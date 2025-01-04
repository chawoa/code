#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,x,t;
    cin>>n>>x;

    int arr[n];

    for (int i = 0; i<n; i++){
        cin>>t;
        arr[i] = t;
    }
    for(int i = 0; i<n; i++){
        if(arr[i]<x){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\n";
}