#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;


    int res=(a+b+abs(a-b))/2;
    int res1 =((res+c+ abs(res-c))/2);

    printf("%d eh o maior\n", res1);
   /* if(a>b && a>c){
        printf("%d eh o maior",a);
    }else if(b>c){
        printf("%d eh o maior",b);
    }
    else{
        printf("%d eh o maior",c);
    }*/
}
