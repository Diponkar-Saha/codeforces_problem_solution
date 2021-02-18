#include<iostream>
using namespace std;
int main(){
    int t,r;
    cin>>t>>r;
    int sum=0;
    for(int i=1;;i++){
        sum+=t;
        if((sum%10==0)||(sum%10==r)){
            cout<<i;
            break;
        }else{
            continue;
        }
    }


}
