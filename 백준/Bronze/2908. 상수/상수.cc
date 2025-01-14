#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string a,b;
    cin>>a>>b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if(a > b){
        cout<<a<<"\n";
    }
    else{
        cout<<b<<"\n";
    }
    
}