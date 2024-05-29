//removes a specific character from a given string

#include<bits/stdc++.h>
using namespace std;
 int main(){
     string s = "anurag" ; 
     int n = s.length();
     for(int i =0 ; i<n ; i++){
         if(s[i] != 'a'){
         cout<<s[i];
         }
     }
     
     
     return 0 ;
 }