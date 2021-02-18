#include<bits/stdc++.h>
using namespace std;
int priority(char symbol)
{
    switch(symbol)
    {

    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default :
        return 0;
    }
}
int main(){
    string arr;
    stack<char> mstack;
    vector<char> output;
    int t;
    cin>>t;
    while(t--){
        cin>>arr;
        for(int i=0;i<arr.length();i++){
            if(arr[i]=='+'||arr[i]=='-'||arr[i]=='*'||arr[i]=='/'||
               arr[i]=='^'){
                   while(!mstack.empty()&&priority(mstack.top())>=priority(arr[i])){
                     output.push_back(mstack.top());
                    mstack.pop();
                   }
                mstack.push(arr[i]);
            }
            else if(arr[i] == '('){
                mstack.push(arr[i]);
            }
            else if( arr[i]==')' ){
                while( mstack.top() !='(' ){
                      output.push_back(mstack.top());
                      mstack.pop();
                }
                mstack.pop();
            }
            else {
                output.push_back(arr[i]);
            }

    }

        while( !mstack.empty() ){
            output.push_back(mstack.top());
            mstack.pop();
        }


        for(int i=0;i<output.size();i++){
            cout<<output[i];
        }
        cout<<endl;
        while(!output.empty()){
            output.pop_back();
        }

    }

    return 0;
}
