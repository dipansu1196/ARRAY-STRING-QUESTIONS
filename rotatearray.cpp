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
// approach 2
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> &arr ,int s,int end){
    int i=s;
    int j=end;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return arr;
}

int main() {
   int n;
    
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
  //  vector<int> result(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
