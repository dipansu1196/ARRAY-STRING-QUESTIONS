#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int n;
    cin>>n;
    string binary="";
    int result;
    while(n){
        binary+=n%2;
        n/=2;
    }
   for(auto& ch: binary){
       if(ch-'0'&1){
           result+=1;
       }
   }
    cout<<result;

    return 0;
}
