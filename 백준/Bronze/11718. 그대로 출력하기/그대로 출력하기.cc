#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string tmp;
    for(int i=0; i<100; i++){
        getline(cin,tmp);
        cout<<tmp<<"\n";
    }
}