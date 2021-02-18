#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,max,min;
    cin>>x>>y;
    if(x<y){
       max=y;
       min=x;

    }else{
        max=x;
        min=y;
    }
    for(int i=min;i<max;i++){
        if((i%5==2)||(i%5==3)){
            cout<<i<<endl;
        }
    }
}

