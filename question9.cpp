
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "bcsduhfioef";
    string str1 = "ANURAGSAXENA";
    // convert into uppercase 
    for(int i = 0 ; i<str.length(); i++){
        if(str[i] >= 'a' && str[i]<= 'z'){
            str[i] = str[i] - 32;
        }
        cout<<str[i];
    }
    // convert into lowercase 
    for(int i = 0 ; i<str1.length(); i++){
        if(str1[i] >= 'A' && str1[i]<= 'Z'){
            str1[i] = str1[i] + 32;
        }
        cout<<str1[i];
    }
    // with transform function we can do it in upper, lowercase
    transform(str.begin() , str.end() , str.begin() , ::toupper);
    cout<<str;
    transform(str1.begin() , str1.end() , str1.begin() , ::tolower);
    cout<<str1;
    
    return 0;
}