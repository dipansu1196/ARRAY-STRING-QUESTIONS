#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr,int n,int k){
    int i=0;
    while(arr.size()>0){
     int   idx=(i+k-1)%arr.size();
        arr.erase(arr.begin()+idx);
            i=idx;
    }
    return arr[0];
}

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    int result=solve(arr,n,k);
    cout<< result;
    return 0;
}
