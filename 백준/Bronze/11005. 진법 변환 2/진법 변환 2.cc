#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n,b;
    cin>>n>>b;

    long long r = 0;

    string a;

    while (n>=b)
    {
        r = n%b;
        if(r<10){
            //cout<<r;
            a += r+'0';
        }
        else{
            //cout<<char(r+55);
            a += char(r+55);
        }
        n = n/b;
    }

    if(n<10){
            //cout<<n;
            a+=n+'0';
    }
    else{
            //cout<<char(n+55);
            a+=char(n+55);
    }

    for(int j=a.size()-1; j>=0; j--){
        cout<<a[j];
    }

    cout<<"\n";
}