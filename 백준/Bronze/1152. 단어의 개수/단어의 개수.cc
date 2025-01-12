#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n=1;
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            n += 1;
        }
    }
    if(s[0]==' '){
        n -= 1;
    }
    if(s[s.size()-1]==' '){
        n -= 1;
    }
    cout<<n<<"\n";    
}