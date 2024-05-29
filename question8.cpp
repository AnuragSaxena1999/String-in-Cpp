// check if a given string is a Palindrome or not

#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string s ; 
    getline(cin,s);
    int n = s.length();
    //int counter = 1 ;
    bool palindrome = true;
    for(int i = 0 ; i<n ; i++){
        if(s[i] != s[n-1-i]){
            palindrome = false;
           // exit(0);
           break;
        }
    }
    if(palindrome == true){
        cout<<"palindrome";
    }
     else if(palindrome == false){
        cout<<"not palindrome";
    }
    

    return 0;
}