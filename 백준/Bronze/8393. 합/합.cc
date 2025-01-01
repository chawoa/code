#include<iostream>
using namespace std;

int main(){
    short n;
    int result = 0;
    cin>>n;
    for (int i = 1; i < n+1; i++){
        result += i;
    }
    cout<<result<<endl;

}