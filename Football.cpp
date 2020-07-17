#include<iostream>
using namespace std;
int main(){
    string s;
    int c=0;
    int one=0,zero=0;
    cin>>s;

    for(int i=0;i<=s.size();i++){
       if(s[i]=='1'){
         one++;
         zero=0;
       }
      else
        {
                zero++;
                one = 0;
        }
          if(one == 7 || zero == 7)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }




