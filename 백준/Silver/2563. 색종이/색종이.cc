#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int result = 0;
    int arr[100][100];
    int x,y;

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            arr[i][j] = 0;
        }
    }


    for(int i=0; i<n; i++){
        cin>>x>>y;
        for(int j=x-1; j<x+9; j++){
            for(int k=y-1; k<y+9; k++){
                arr[j][k] = 1;
            }
        }
    }

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(arr[i][j] == 1){
                result++;
            }
        }
    }

    cout<<result<<"\n";

}