#include<bits/stdc++.h>
using namespace std;
int main(){
    // how to take string as an input
string str1;
string str2;
getline(cin, str1);
getline(cin,str2);
//cout<<str;

string str = "hello";
//  append fuction 
str1.append(str2);  
cout<<str1<<" ";
// concatenate two strings  
str1 = str1 + str2;
cout<<str1;
//  at() function we get element at any index
cout<<str1.at(3);
//  stoi() function conevret string to integer
string x = "768";
int a = stoi(x);
cout<<a + 2<<endl;
//to_string() convert integer to string;
int x = 768;
cout<<to_string(x)<<endl;
// sort() we can sort the string from a to z
string s = "hello";
sort(s.begin(),s.end());
cout<<s;
//substr() to get substring;
string s = "hellloimanurag";
string a = substr(2 , 5);
cout<<a;
//length() to get length of any string
cout<<str1.length()<<endl;
// insert() to insert aany string at any index
str1.insert(3, "lol");
cout<<str1;
//find() to find the elements in the string
string str1 = "anurag";
str1.find("nura");
//clear() erase everything in the string
s.clear();
cout<<s;
//erase() erase with from where to where we want erase start erase from 1st element to next four
s.erase(1,4) ;
//count() 
// "Number of times 'e' appears : "
cout<<count(str.begin(), str.end(), 'e');



return 0;


}