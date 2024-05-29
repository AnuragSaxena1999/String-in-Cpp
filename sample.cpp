// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /* 1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
*/
    
    
    int n1 , n2;
    cin>>n1>>n2;
    int array[n1][n2];
    for(int i = 0; i<n1 ; i++){
        for(int j = 0 ; j<n2 ; j++){
            cin>>array[i][j];
        }
    }
    /*for(int i = 0; i<n1 ; i++){
        for(int j = 0 ; j<n2 ; j++){
          cout<<array[i][j]<< " ";
        }cout<<endl;
    }*/
    
    /*int glass_sum  = array[i][j] + array[i][j+1] + array[i][j+1] +array[i][j+2] + array[i+1][j+1] + array[i+2][j]  + array[i+2][j+1] + array[i+2][j+2] ;*/
    int sum = 0;
    for(int i = 0 ; i<n1-2 ; i++){
        for(int j = 0 ; j<n2-2 ; j++){
          int glass_sum  = array[i][j] + array[i][j+1]  +array[i][j+2] + array[i+1][j+1] + array[i+2][j]  + array[i+2][j+1] + array[i+2][j+2] ;
          cout<<glass_sum<<endl;;
          sum = max(sum , glass_sum);
        }
    }
    cout<<sum;
    
    return 0;
}