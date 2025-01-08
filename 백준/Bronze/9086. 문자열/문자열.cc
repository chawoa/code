#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n;
    string s;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        cout<<s[0]<<s[s.size()-1]<<"\n";
    }


}