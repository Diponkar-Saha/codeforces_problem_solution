#include<iostream>
using namespace std;
int main(){
    int up=0,lo=0;
    string s;
    cin>>s;
    for(int i= 0;i<s.size();i++){
        if(isupper(s[i])){
            up++;
        }else{
            lo++;
        }
    }
    if(up<lo){//2<3
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    } if(up>lo){//3<2
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    } if(up==lo){//2=3
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }



}
