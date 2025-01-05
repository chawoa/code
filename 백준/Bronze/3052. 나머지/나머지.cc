#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short arr[42]={0,};
    short tmp,c;
    short count = 0;
    for(int i=0; i<10; i++){
        cin>>tmp;
        c=tmp%42;
        arr[c]=1;
    }
    for(int i=0; i<42; i++){
        if(arr[i] == 1){
            count += 1;
        }
    }
    cout<<count<<"\n";
}