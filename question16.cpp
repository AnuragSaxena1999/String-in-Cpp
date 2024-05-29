
//Count number of duplicate characters in a given string
#include<bits/stdc++.h>
using namespace std;
 int main(){
     string s  ;
     getline(cin , s);
     int n = s.length();
     sort(s.begin() , s.end());
     cout<<s;
     int count = 1;
     for(int i =0 ; i<n ; i++){
         if(s[i]  == s[i+1]){
             count = count+1;
         }
     }
     cout<<count;
     return 0 ;
 }