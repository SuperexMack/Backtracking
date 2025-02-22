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

// 0 1 1 2 3 5 8 13

int fibo(int n , vector<int>& dp){
    // base case
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(n-1,dp)+fibo(n-2,dp);
}

int main(){
  int n = 6;
  vector<int>dp(n+1,-1);
  int ans = fibo(n,dp);
  cout<<"Values of DP is : "<<endl;
  for(int i = 0 ; i <dp.size() ; i++){
    cout<<dp[i]<<endl;
  }
  cout<<ans;
}
