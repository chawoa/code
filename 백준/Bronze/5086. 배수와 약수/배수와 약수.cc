#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    short x,y;
    while(true){
        cin>>x>>y;

        if(x==0 && y==0){
            break;
        }
        else if(x>y && (x%y)==0){
            cout<<"multiple"<<"\n";
        }
        else if(y>x && (y%x)==0){
            cout<<"factor"<<"\n";
        }
        else{
            cout<<"neither"<<"\n";
        }
    }
}