#include<bits/stdc++.h>
using namespace std;

int solve(int n,vector<int>& arr){
    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++){
        int d=arr[i]/60;
        d++;
        int req=d*60-arr[i];
        if(mp[req]!=0){
            count+=1;
            mp[req]=0;
        }
        else{
            mp[arr[i]]++;
        }
    }
    return count;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< solve(n,arr);
    return 0;
}
