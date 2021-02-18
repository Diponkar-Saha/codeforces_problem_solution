#include<bits/stdc++.h>
using namespace std;
int main(){
    int j;
    while(1){
        cin>>j;
        if(j==0){
            break;
        }
        cout<<"1";
        for(int k=2;k<=j;k++){
            cout<<" "<<k;
        }
        cout<<endl;
    }

}
