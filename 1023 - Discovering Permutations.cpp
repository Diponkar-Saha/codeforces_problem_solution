#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,cnt=0;
    cin>>t;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(t--){

        int a,b;

        cin>>a>>b;
        string t = s;
        int ct = 0;
        cout<<"Case "<<cnt++<<":"<<endl;
        while(ct<b){
            for(int i=0;i<a;i++){
                cout<<t[i];
            }
            cout<<endl;
            ct++;
            next_permutation(t.begin(),t.begin()+a);
            if(t==s){
                break;
            }

        }



    }

}
