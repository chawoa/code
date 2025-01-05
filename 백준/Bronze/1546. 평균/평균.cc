#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short n,tmp;
    cin>>n;
    float arr[n];
    float max = 0.0;
    float result=0.0;

    for(int i=0; i<n; i++){
        cin>>tmp;
        arr[i]=tmp;
        if(max<tmp){
            max=tmp;
        }
    }
    for(int i=0; i<n; i++){
        arr[i] = 100.0*arr[i]/max;
    }
    for(int i=0; i<n; i++){
        result += arr[i];
    }
    cout<<result/n<<"\n";
}