//change every letter in a given string with the letter following it in the alphabet
// (ie. a becomes b, p becomes q, z becomes a).

#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string s ;
    getline(cin,s);
   
    int n = s.length();
    for(int i = 0 ; i<n ; i++){
        s[i] = s[i] +1;
        cout<<s[i];
    }
    return 0;
}