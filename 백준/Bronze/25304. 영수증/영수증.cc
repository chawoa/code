#include<iostream>
using namespace std;

int main(){
    long long x;
    long long result = 0;
    int a;
    short n,b;

    cin>>x>>n;

    for (int i = 0 ; i<n; i++){
        cin>>a>>b;
        result += a*b;
    }

    if(x==result){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}