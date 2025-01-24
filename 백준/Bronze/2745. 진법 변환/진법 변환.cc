#include<iostream>
#include<cmath>
using namespace std;

int main(){
    string n;
    long long b;

    cin>>n>>b;

    long long r = 0;

    for(int i=0; i<n.size(); i++){
        if(n[i]>57){
            n[i] -= 55;
        }
        else{
            n[i] -= 48;
        }
        r = r + n[i] * pow(b, n.size() - 1 - i);
    }

    cout<<r<<"\n";
}