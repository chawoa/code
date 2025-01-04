#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int t, arr[9];
    for(int i=0; i<9; i++){
        cin>>t;
        arr[i]=t;
    }
    int max = arr[0];
    int num = 1;
    for(int i=0; i<9; i++){
        if(arr[i]>max){
            max = arr[i];
            num = i + 1;
        }
    }
    cout<<max<<"\n";
    cout<<num<<"\n";

}