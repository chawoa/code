#include <iostream>
using namespace std;

int main(){
    short a,b;
    cin>>a>>b;

    if (a==b){
        cout<<"=="<<endl;
    }
    else if (a < b){
        cout<< "<" <<endl;
    }
    else{
        cout<<">"<<endl;
    }
}