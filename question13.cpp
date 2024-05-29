 //alternates the case of each letter in a given string of letters

#include<bits/stdc++.h>
using namespace std;
 int main(){
     string s = "javascript" ; 
     int n = s.length();
     for(int i=0 ; i<n ; i++){
         int rem = i%2;
         if(rem == 0){
             s[i] = s[i]-32;
         }
     }
     cout<<s;
     
     return 0 ;
 }