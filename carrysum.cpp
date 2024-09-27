#include<bits/stdc++.h>
using namespace std;
int solve(int n1,int n2){
    int carry=0;
    int p,q;
    int sum;
    int count=0;
    while(n1&&n2){
        p=n1%10;
        q=n2%10;
        sum=p+q+carry;
        if(sum>9){
            carry=1;
            count++;
            }
        else{
            carry=0;
        }
        n1/=10;
        n2/=10;
            
        
    }
    while(n1){
        p=n1%10;
        sum=p+carry;
        if(sum>9){
            carry=1;
            count++;
        }else
        {
            carry=0;
        }
        n1/=10;
    }
     while(n2){
        q=n2%10;
        sum=q+carry;
        if(sum>9){
            carry=1;
            count++;
        }else
        {
            carry=0;
        }
        n2/=10;
    }
    return count;
}
int main() {
    int n1;
    int n2;
    cin>>n1>>n2;
    cout<<solve(n1,n2);
    return 0;
}
