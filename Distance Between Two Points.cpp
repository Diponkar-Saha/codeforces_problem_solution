#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1,x2,y1,y2,res;
    cin>>x1;
    cin>>x2;
    cin>>y1;
    cin>>y2;

    res= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.f\n",res);

}

