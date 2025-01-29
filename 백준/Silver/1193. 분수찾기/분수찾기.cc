#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    long long n;
    int i=1;
    int r=1;

    cin>>n;

    for(i; n>i; i++){
        n -= i;
    }
    n--;

    if(i%2==0){
        cout<<1+n<<"/"<<i-n<<"\n";
    }
    else{
        cout<<i-n<<"/"<<1+n<<"\n";
    }

}
