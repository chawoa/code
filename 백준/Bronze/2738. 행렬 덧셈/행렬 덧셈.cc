#include<iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;

    int arra[n][m];
    int arrb[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arra[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arrb[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arra[i][j] += arrb[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arra[i][j]<<" ";
        }
        cout<<"\n";
    }
}