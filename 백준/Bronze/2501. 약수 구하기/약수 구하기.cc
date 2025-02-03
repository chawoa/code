#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,k,t;

    cin>>n>>k;

    for(int i=1; i<n+1; i++){
        if((n%i)==0){
            t=i;
            k--;
            if(k==0){
                break;
            }
        }
        if(i==n && k>0){
            t=0;
        }
    }

    cout<<t<<"\n";

}