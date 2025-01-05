#include<iostream>
using namespace std;

int main(){
    short arr[30];
    short tmp;
    for(int i=0; i<30; i++){
        arr[i] = i+1;
    }
    for(int i=0; i<28; i++){
        cin>>tmp;
        arr[tmp-1]=0;
    }
    for(int i=0; i<30; i++){
        if(arr[i]!=0){
            cout<<arr[i]<<"\n";
        }
    }

}