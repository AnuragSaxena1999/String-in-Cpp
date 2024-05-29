//count all the words in a given string

#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string s ;
    getline(cin,s);
    int n = s.length();
    int counter =1 ;
    for(int i = 0 ; i<n ; i++){
        if(s[i] == ' ' || s[i] == '\0'){
            counter++;
        }
    }
    cout<<counter<<endl;

    return 0;
}