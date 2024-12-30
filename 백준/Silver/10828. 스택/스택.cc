#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n, x, result;
    string control;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>control;
        if (control == "push"){
            cin>>x;
            s.push(x);
        }
        else if (control == "pop"){
            if (s.size() == 0){
                cout<<-1<<endl;
            }
            else {
                result = s.top();
                cout<<result<<endl;
                s.pop();
            }
        }
        else if (control == "size"){
            result = s.size();
            cout<<result<<endl;
        }
        else if (control == "empty"){
            if (s.size() == 0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else if (control == "top"){
            if (s.size() == 0){
                cout<<-1<<endl;
            }
            else{
                result = s.top();
                cout<<result<<endl;
            }
        }

    }
}