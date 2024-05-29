//capitalize the first letter of each word of a given string

#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string s ;
    getline(cin,s);
   
    int n = s.length();
    for(int i = 0 ; i<n ; i++){
       if(s[i] == ' '){
           s[i+1] = toupper(s[i+1]);
       }
       else if(i==0){
           s[i] = toupper(s[i]);
       }
      
    }
    cout<<s;
     

    return 0;
}