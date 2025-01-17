#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int arr[9][9];
    int c=0,r=0;
    int max=-1;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
                r = i+1;
                c = j+1;
            }
        }
    }

    cout<<max<<"\n";
    cout<<r<<" "<<c<<"\n";
}