#include<bits/stdc++.h>
using namespace std;

int main() {
   string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int wh1=0;
    int wh2=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==' '){
            wh1++;
        }
    }
         for(int j=0;j<s2.length();j++){
        if(s2[j]==' '){
            wh2++;
        }
         }
             if((wh1-wh2)%2==0){
                 cout<<"Even"+to_string(wh1-wh2);
             }else{
                 cout<<"Odd"+to_string(wh1-wh2);
             }
    return 0;
}
