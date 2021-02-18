#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,area,permutation;

    cin>>a>>b>>c;
    area=((a+b)*c)/2;
    permutation=a+b+c;
    if(a+b>c && b+c>a && c+a>b){
        cout << "Perimetro = " << fixed << setprecision(1) << permutation << endl;
    }else{
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }


}
