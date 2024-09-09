#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    std::cout << "Hello World!\n";
    int n;
    int target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int i=0;
    int j=arr.size()-1;
    int product=0;
    int ans[2]={0,0};
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
            
        }else if(arr[i]+arr[j]==target){
            int product2=arr[i]*arr[j];
            if(product2>product){
                product=product2;
            ans[0]=arr[i];
            ans[1]=arr[j];}
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
    }
    cout<<ans[0]<<" "<<ans[1];
    return 0;
    
    
}


//app2
#include<bits/stdc++.h>
using namespace std;

 auto comp = [] (int a, int b) {
        return a > b;
    };

void solve(int n, vector<int>arr,int target)
{
    vector<int>ans(2,0);
    int prod=0;
    
    sort(arr.begin(),arr.end(),comp);
    int st=0,end=n-1;
    while(st<end)
    {
        int sum=arr[st]+arr[end];
        
        if(sum==target)
        {
            if(prod<arr[st]*arr[end])
            {
                prod=arr[st]*arr[end];
                ans[0]=arr[st];
                ans[1]=arr[end];
            }
            st++;
            end--;
        }
        else if(sum<target)end--;
        else st++;
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    solve(n,arr,target);
    return 0;
}

