#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
    cin>>a;
    while(a--){


    int t;
    int sum1=0,sum2=0;
    cin>>t;
    if(t%2==0){
            if(t%4==0){
        cout<<"YES"<<endl;

    vector<int>num;
    num.push_back(2);
    for(int i=1;i<=t;i++){
        if(i%2==0){
            num.push_back(i);
        }
    }

    for(int i=1;i<=t;i++){
        if(i%2!=0){
            num.push_back(i);
            sum2+=i;
        }
    }
    for(int i=1;i<=t;i++){
        if(i%2==0){
            sum1+=i;
        }
    }
    int c=sum1-sum2;
    int x=num.back();
    num.back()=c+x;


    for(int i=1;i<=t;i++){
        cout<<num[i]<<" "<<endl;
    }
            }else{
                cout<<"NO"<<endl;
            }


    }else{
        cout<<"NO"<<endl;
    }

    }




}
