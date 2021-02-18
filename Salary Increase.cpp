#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,per;
    std::cin>>n;
    if(n<=400.00){
        per = (float)15/100*n;
        std::cout<<"Novo salario: "<< fixed << setprecision(2)<<n+per<<endl;
        std::cout<<"Reajuste ganho: "<< fixed << setprecision(2)<<per<<endl;
        cout<<"Em percentual: 15 %"<<endl;

    }else if(n<=800.00){
        per = (float)12/100*n;
        std::cout<<"Novo salario: "<< fixed << setprecision(2)<<n+per<<endl;
        std::cout<<"Reajuste ganho: "<< fixed << setprecision(2)<<per<<endl;
        cout<<"Em percentual: 12 %"<<endl;

    }else if(n<=1200.00){
        per = (float)10/100*n;
        std::cout<<"Novo salario: "<< fixed << setprecision(2)<<n+per<<endl;
        std::cout<<"Reajuste ganho: "<< fixed << setprecision(2)<<per<<endl;
        cout<<"Em percentual: 10 %"<<endl;


    }else if(n<=2000.00){
         per = (float)7/100*n;
        std::cout<<"Novo salario: "<< fixed << setprecision(2)<<n+per<<endl;
        std::cout<<"Reajuste ganho: "<< fixed << setprecision(2)<<per<<endl;
        cout<<"Em percentual: 7 %"<<endl;

    } else{
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", n * 1.04, n * 0.04);

    }


}
