#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    long long n;
    long long s = 1;
    int i=1;

    cin>>n;

    if(n==1){
        cout<<1<<"\n";
    }
    else{
        for(i; s<n; i++){
            s += 6*i;
        }
        cout<<i<<"\n";
        
    }


}
