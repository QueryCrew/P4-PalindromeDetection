#include <bits/stdc++.h>
using namespace std;
bool check_palindrome(string s){
    int n= s.length();
    for(int i=0;i<n;i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }return true;
}
int main(){
    string n;
    cin>>n;
    if(check_palindrome(n)){
        cout<<"True";
    }else{
        cout<<"False";
    }  
    return 0;
}