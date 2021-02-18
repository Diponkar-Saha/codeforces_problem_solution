#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,w,h;
    long n;


    cin>>t;
    while(t-- >= 1){
        cin>>w>>h>>n;
        long sheets=1;
        while(w%2==0){
            w=w/2;
            sheets=sheets*2;
        }
         while(h%2==0){
            h=h/2;
            sheets=sheets*2;
        }
        if(sheets>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


}
