// // Think Like a Mathematician and code like a Nerd
// // Try to first think mathematically and pattern wise
// // Don't rush keep calm and think mathematically 
// // Take a rough copy and a pen and first try to solve it in a rough copy
// // Feel the question 



// // Twitter Username - @mohitsatitwt
// // Linkedin - https://www.linkedin.com/in/mohitsatilinks/


// // ----------------------------------Coding ShortCuts--------------------------------------------------



// // stable_sort(mack.begin(), mack.end(), [&](int i, int j) {
// //       return airDrop[i] > airDrop[j];
// // });
 
// // The above code is used to sort the index of the array on the basis of their value in descending order



#include<bits/stdc++.h>
using namespace std;


int findPath(int i , int j, vector<vector<int>>& DP , int n , int m){
    // Base case
    if(i>=n || j>=m) return 0;
    if(i == n-1 && j == m-1) return 1;

    if(DP[i][j] != -1) return DP[i][j];

    int first = findPath(i+1,j,DP,n,m);
    int second = findPath(i,j+1,DP,n,m);
    return DP[i][j] = first+second;
    
}

int main(){
 int n = 3 , m = 7;
 vector<vector<int>>DP(n,vector<int>(m,-1));
 int ans = findPath(0,0,DP,n,m);
 cout<<ans;
}
