#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    if(n<0){
       if(m==1){
            cout<<"0  0"<<endl;
            return 0;
        }else{
        cout<<"-1  -1"<<endl;
        return 0;}
       }
       string maxx;
       string mini;
       for(int i=0;i<m;i++){
            int k=(9,n);
            maxx.push_back('0'+k);
            n-=k;
            }if(n>0){
            cout<<"-1  -1"<<endl;
            return 0;

            }

            for(int i=m-1;i>=0;i--){
                mini.push_back(maxx[i]);}

       int j=0;
       while(mini[j]=='0')
        j++;
       mini[0]++;
       mini[j]--;

        cout<<mini<<" "<<maxx<<endl;


}
