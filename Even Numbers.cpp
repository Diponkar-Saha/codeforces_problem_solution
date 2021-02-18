#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,num,in=0,out=0;
    cin>>t;
    while(t--){
        cin>>num;
        if(num>=10 && num<=20){
            in++;
        }else{
            out++;
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

}
