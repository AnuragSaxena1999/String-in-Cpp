//convert a given non-negative integer to English words

#include<bits/stdc++.h>
using namespace std;
 int main(){
     int n;
     cin>>n;
     string s[] = {"zero", "one" , "two" , "three" ,"four", "five" ,"six", "seven" ,"eight" ,"nine" ,"ten" ,"eleven" ,"twelve" ,"thirteen" ,"fourteen" ,"fifteen" ,"sixteen", "seventeen" ,"eighteen" ,"nineteen" , "twenty"};
     
     string s1[] = {" ", " ", "twenty" ,"thirty" ,"forty" ,"fifty" ,"sixty", "seventy" ,"eighty", "ninty"};
     string s2[] = {" ", " hundred"," thousand"};
     if(n<20){
         cout<<s[n];
     }
     if(n>20 && n<=99){ 
         int rem = n%10;
         int que = n/10;
         if(rem ==0){
             cout<<s1[que];
         }
         else{
             cout<<s1[que]<<" "<<s[rem];
         }
        }
    if(n>=100 && n<=999){
        int rem = n%100;
        int que = n/100;
        int que1 = rem/10;
        rem = rem%10;
        //int que1 = rem/10;
        cout<<s[que]<<" " <<"hundred"<<" "<<s1[que1]<<" "<<s[rem];
    }
     
     return 0 ;
 }