#include<bits/stdc++.h>
using namespace std;
int main(){
    float x;
    cin>>x;
    if(x<0 ||x>100){
        cout<<"Fora de intervalo"<<endl;
    }else if(x>=0&&x<=25){
        cout<<"Intervalo [0,25]"<<endl;
    }else if(x>25&&x<=50){
        cout<<"Intervalo (25,50]"<<endl;
    }else if(x>25&&x<=75){
        cout<<"Intervalo (25,70]"<<endl;
    }
    else {
        cout<<"Intervalo (25,100]"<<endl;
    }

}
