#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello World!\n";
    string s,t;
    cin>>s;
    cin>>t;
    int idx=0;
    for (int i=0;i<t.length();i++){
        if(t[idx]==s[i]){
            idx++;
        }
    }
    cout<<idx+1;
    return 0;
}
/* OUTPUT AND INPUT
RRRBGBRBBB
BBBR
Hello World!
2*/
