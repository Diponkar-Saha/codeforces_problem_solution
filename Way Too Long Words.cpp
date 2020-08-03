#include<iostream>
using namespace std;
int main(){
    string s;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int t=s.size();

        if(t>10){
            cout<<s[0]<<t-2<<s[t-1]<<endl;
        }else{
            cout<<s<<endl;
            }
        }


}
