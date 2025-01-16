#include<iostream>
using namespace std;

float g2f(string grade){
    if(grade == "A+"){
        return 4.5;
    }
    else if(grade == "A0"){
        return 4.0;
    }
    else if(grade == "B+"){
        return 3.5;
    }
    else if(grade == "B0"){
        return 3.0;
    }
    else if(grade == "C+"){
        return 2.5;
    }
    else if(grade == "C0"){
        return 2.0;
    }
    else if(grade == "D+"){
        return 1.5;
    }
    else if(grade == "D0"){
        return 1.0;
    }
    else if(grade == "F"){
        return 0.0;
    }

    return 0;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    string name,g;
    float h;
    float r = 0;
    float t=0;

    for(int i=0; i<20; i++){
        cin>>name>>h>>g;

        if(g=="P"){
            continue;
        }
        else{
            r += h*g2f(g);
            t += h;
        }
    }
    cout<<r/t<<"\n";

}

