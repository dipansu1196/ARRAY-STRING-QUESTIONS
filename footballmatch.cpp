#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    string input;
    cin>> input;
    int goal_A=0;
    int goal_B=0;
    for(int i=4;i<input.length();i+=5){
    if(input[i]=='A')
    goal_A+=1;
    else
    goal_B+=1;
    }
    if(goal_A>goal_B){
        cout<<"team a wins";
    }
    else if(goal_B>goal_A)
    cout<<"team b wins";
    else
    cout<<"equal goals";
    

    return 0;
}
