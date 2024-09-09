#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int n;
    cin>>n;
    int k;
    cin>>k;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int result[n];
for(int i=0;i<k;i++){
    result[i]=arr[n-k+i];
}
for(int i=k, j=0;i<n,j<(n-k);i++,j++){
    result[i]=arr[j];
}
for(int i=0;i<n;i++){
    cout<<result[i]<<"";
}
    return 0;
}
