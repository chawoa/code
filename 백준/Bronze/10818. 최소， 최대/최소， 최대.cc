#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n,t;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>t;
        arr[i] = t;
    }
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<min<<" "<<max<<"\n";
}