//insert a dash character (-) between two odd numbers in a given string of numbers

#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string s ; 
    getline(cin,s);
    string result;
    int n = s.length();
    //int counter = 1 ;
    for(int i = 0; i<n ; i++){
       if((s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] ==  '9') && (s[i+1] == '1' || s[i+1] == '3' || s[i+1] == '5' || s[i+1] == '7' || s[i+1] ==  '9')){
            s.insert(i+1 , "-");
            n = n+1;
        }
    }
    cout<<s;
    return 0;
}