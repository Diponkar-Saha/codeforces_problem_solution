#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[1000],str1[1000];
    int a,b,c,t,l;
    cin>>t;
    while(t--){
        gets(str);
        l=strlen(str);
        for(int i=0;i<l;i++){
            if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
                str[i]=str[i]+3;
            }
        }
        a=0;
        for(int j=l-1;j>=0;j--){
            str1[a]=str[j];
            a++;
        }
        str1[a]='\0';
        c=l/2;
        for(int i=c;i<l;i++){
            str1[i]=str1[i]-1;
        }
        cout<<str1<<endl;


    }


}
