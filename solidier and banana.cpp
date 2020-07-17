#include<iostream>
using namespace std;
int main(){
    int k,n,w,x;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++){
       sum+=i;
    }
    x=(sum*k)-n;
    if(x<0){
        cout<<"0";
        }else{
        cout<<x<<endl;
        }
}
