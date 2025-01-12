#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string s;
    int a[26];
    fill_n(a,26,-1);

    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(a[s[i] - 'a'] == -1){
            a[s[i] - 'a'] = i;
        }
    }

    for(int i=0; i<26; i++){
        cout<<a[i]<<" ";
    }    
    cout<<"\n";
}