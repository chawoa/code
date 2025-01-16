#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string s;

    cin>>s;
    int l=s.size();

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'c'){
            if(s[i+1]=='-' || s[i+1]=='='){
                l -= 1;
                i++;
            }
        }
        else if(s[i]=='d'){
            if(s[i+1]=='-'){
                l--;
                i++;
            }
            else if(s[i+1]=='z' && s[i+2]=='='){
                l -= 2;
                i += 2;
            }
        }
        else if(s[i]=='l'){
            if(s[i+1]=='j'){
                l--;
                i++;
            }
        }
        else if(s[i]=='n'){
            if(s[i+1]=='j'){
                l--;
                i++;
            }
        }
        else if(s[i]=='s' || s[i]=='z'){
            if(s[i+1]=='='){
                l--;
                i++;
            }
        }
    }
    cout<<l<<"\n";
}