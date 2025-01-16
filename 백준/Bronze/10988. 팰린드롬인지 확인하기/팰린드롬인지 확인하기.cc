#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string s1,s2;
    cin>>s1;
    s2 = s1;

    reverse(s2.begin(), s2.end());

    if(s1 == s2){
        cout<<"1"<<"\n";
    }
    else{
        cout<<"0"<<"\n";
    }
}