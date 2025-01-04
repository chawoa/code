#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,m,t;
    cin>>n>>m;
    short arr[n];
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
    short arr1[3];
    for(int i=0; i<m; i++){
        for(int j=0; j<3; j++){
            cin>>t;
            arr1[j]=t;
        }
        for(int k=arr1[0]-1; k<arr1[1]; k++){
            arr[k]=arr1[2];
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}