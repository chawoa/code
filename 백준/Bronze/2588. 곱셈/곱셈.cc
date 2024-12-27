#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, y, temp;
    int count = 0;
    cin>>x;
    cin>>y;
    temp = y;
    while(temp>0){
        temp = temp/10;
        count++;
    }
    int arr[count];
    int total;
    int k = y;
    for (int i = count-1; i >= 0; i--){
        arr[i] = k / pow(10, i);
        k -= arr[i] * pow(10,i);
    }

    for (int i = 0; i < count; i++){
        total += x * arr[i] * pow(10,i);
        cout<<x * arr[i]<<endl;
    }

    cout<<total<<endl;
}