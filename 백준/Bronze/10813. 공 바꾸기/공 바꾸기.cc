#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,m,tmp,x,y;
    cin>>n>>m;
    short arr[n];

    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }

    for(int i=0; i<m; i++){
        cin>>x>>y;
        tmp = arr[x-1];
        arr[x-1] = arr[y-1];
        arr[y-1] = tmp;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}