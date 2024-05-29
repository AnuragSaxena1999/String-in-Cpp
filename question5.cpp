//sort characters (numbers and punctuation symbols are not included) in a string.
#include <bits/stdc++.h>
using namespace std;

int main() {
 string str1 = "76483684";
 string str  = "anurag";
 
 // sort any string in increasing order
 sort(str.begin() , str.end());
 cout<<str<<endl;;
  // sort any string in desending order
     sort(str.begin() , str.end() , greater<int>());
     cout<<str;
     
    return 0;
}