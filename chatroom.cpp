#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string d="hello";
    int x=0,y=0;
    for(int i=0;i<s.size();i++){

       if(s[i]==d[x]){

        x++;
        y++;
        }

    }
        if(y==d.size()){
            cout<<"YES";
        }else{
            cout<<"NO";
            }

}
