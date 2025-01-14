#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string s;
    cin>>s;
    int t = 0;
    short tmp;

    for(int i=0; i<s.size(); i++){
        tmp = s[i] - 'A';
        if(tmp < 3){
            t += 3;
        }
        else if(tmp < 6){
            t += 4;
        }
        else if(tmp < 9){
            t +=5;
        }
        else if(tmp < 12){
            t += 6;
        }
        else if(tmp < 15){
            t += 7;
        }
        else if(tmp < 19){
            t += 8;
        }
        else if(tmp < 22){
            t += 9;
        }
        else if(tmp < 26){
            t += 10;
        }
    }
    cout<<t<<"\n";
}