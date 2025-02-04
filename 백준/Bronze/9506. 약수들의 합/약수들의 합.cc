#include<iostream>
using namespace std;

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    while(true){
        int t=0;
        cin>>n;
        if(n==-1){
            break;
        }
        else{
            for(int i=1; i<n; i++){
                if((n%i)==0){
                    t += i;
                }
            }
            if(n==t){
                cout<<n;
                for(int i=1; i<n; i++){
                    if((n%i)==0){
                        if(i==1){
                            cout<<" = "<<i;
                        }
                        else{
                            cout<<" + "<<i;
                        }
                    }
                }
                cout<<"\n";
            }
            else{
                cout<<n<<" is NOT perfect."<<"\n";
            }
        }
    }
}
