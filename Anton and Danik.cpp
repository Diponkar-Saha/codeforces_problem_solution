#include<iostream>
using namespace std;
int main(){
    int n,a=0,d=0;
    cin>>n;
    string s;
    cin>>s;
   // for(int i=0;i<n;i++){
      //  cin>>s[i];
   // }
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }else if(s[i]=='D'){
            d++;
        }
    }
    if(a==d){
       cout<< "Friendship"<<endl;
    } if(a>d){
       cout<< "Anton"<<endl;
    } if(a<d){
       cout<< "Danik"<<endl;
    }


}
