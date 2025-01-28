#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n;
    cin>>n;
    int r=2;
    for(int i=0; i<n; i++){
        r += r-1;
    }

    cout<<(int)pow(r,2)<<"\n";

}