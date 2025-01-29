#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int b,a,v;
    int i;

    cin>>a>>b>>v;

    i = ceil(double(v-b)/double(a-b));
    cout<<i<<"\n";

}
