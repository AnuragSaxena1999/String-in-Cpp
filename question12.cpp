//remove all special characters from a given string
#include<bits/stdc++.h>
using namespace std;
 int main(){
     string s = "a@bcd$js#i@acde$" ; 
     int n = s.length();
     for(int i=0 ; i<n ; i++){
         if(s[i]=='@' || s[i]== '#' || s[i]== '$'|| s[i] == '%'){
             s.erase(i,1);
         }
     }
     cout<<s;
     return 0 ;
 }