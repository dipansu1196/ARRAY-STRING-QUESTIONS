#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    string binary="";
    while(n){
        binary+=n%2+'0'; // A small improvement: When appending the remainder to binary, make sure to convert it to a character by adding '0'. So, the line should be:

binary += (n % 2) + '0';
        n/=2;
    }
    int sum=0;
    for(auto & ch:binary){
        int num=ch-'0';
        sum+=num;
    }
    cout<<sum;
    return 0;
}
