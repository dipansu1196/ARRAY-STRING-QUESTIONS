#include<bits/stdc++.h>
using namespace std;
string solve(string &str){
    if(str.back()%2==1){
        return str;
    }
    int i=str.size()-1;
    while(i>=0){
        if(str[i]%2==1){
            return str.substr(0,i+1);
        }
        i--;
    }
    return "";
}
int main(){
    string str;
    cin>>str;
    string ans= solve(str);
    cout<<ans;
    return 0;
}
