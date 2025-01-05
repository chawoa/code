#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,m,x,y;
    cin>>n>>m;
    short arr[n],arr1[n];
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }
    for(int i=0; i<m; i++){
        short t=0;
        cin>>x>>y;
        for(int j=y-1; j>=x-1; j--){
            arr1[t] = arr[j];
            t++;
        }
        for(int j=0; j<y-x+1; j++){
            arr[x-1+j]=arr1[j];
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}