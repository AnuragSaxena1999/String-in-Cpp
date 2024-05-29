//count all the vowels in a given string.
#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string s ;
    getline(cin,s);
    int n = s.length();
    int vowel = 0;
    int consonent =0;
    for(int i = 0 ; i<n ; i++){
       if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' ){
          vowel++;
       }else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U' ){
          vowel++;
       }
      
    }
    cout<<vowel;
     

    return 0;
}