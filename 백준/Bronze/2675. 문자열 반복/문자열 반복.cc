#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,t;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>t>>s;
        for(int j=0; j<s.size(); j++){
            for(int k=0; k<t; k++){
                cout<<s[j];
            }
        }
        cout<<"\n";
    }    
}