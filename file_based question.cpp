int solve(string s[],int n){
    if(n==0){
        return -1;
    }
     int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int n=0;
       
        if(s[i].substr(0,5)=="File_"){
            for(int j=5;j<s[i].length();j++){
                if(!isalpha(s[i][j])){
                    int num=s[i][j]-'0';
                    n=num+n*10;
                    
                    
                }
                else{
                cout<<"invalid input";
                return -1;
                
                    
                }
            }
            
            
              maxi=max(maxi,n);
              n=0;
        }
        else{
                cout<<"Invalid input";
                return -1;
            }
    }
    cout<<maxi;
    return maxi;
}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
   int n;
   cin>>n;
   string arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   solve(arr,n);

    return 0;
}
