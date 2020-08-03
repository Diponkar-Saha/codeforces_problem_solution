#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int a,b,c,count=0;

    for(int i=0;i<s;i++){
        cin>>a>>b>>c;
        if(a+b+c >=2){

        count++;
        }
    }


    cout<<count<<endl;


}
