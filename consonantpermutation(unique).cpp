#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(string s){
    int n=s.length();
    unordered_set<char> cons;
    for(int i=0;i<n;i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
            cons.insert(s[i]);
        }
        
    }
    int j=cons.size();
    
    if (j <= 1) return 1;
    int fact = 1;
    for (int i = 2; i <= j; i++) {
        fact *= i;
    }
    return fact;
    
}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    string s;
    
    cin>>s;
cout<<solve(s);
    return 0;
}
