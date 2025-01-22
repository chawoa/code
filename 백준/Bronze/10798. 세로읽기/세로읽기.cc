#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string tmp;
    char arr[5][15];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 15; j++) {
            arr[i][j] = '*';
        }
    }

    for(int i=0; i<5; i++){
        cin>>tmp;
        for(int j=0; j<tmp.size(); j++){
            arr[i][j] = tmp[j];
        }
    }

    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(arr[j][i] == '*'){
                continue;
            }
            else{
                cout<<arr[j][i];   
            }
        }
    }
    cout<<"\n";
}