#include <bits/stdc++.h>
using namespace std;

int main()
{ 
   string num;
    cin>>num;
    
    string str=num;
    reverse(str.begin(),str.end());
    
   
    (num==str) ? cout<<"True\n" :cout<<"False\n";
}

