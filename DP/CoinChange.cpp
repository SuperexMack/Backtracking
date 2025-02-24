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

int changeCoin(vector<int>&coins , int Node ,int amount , vector<vector<int>>&DP){
   // Base case
   if(amount==0) return 0;
   if(Node<0) return 1e9;

   if(DP[Node][amount] != -1) return DP[Node][amount];

   // so here we are goind to do 
   // Take or Not-take and that's all
   
   if(amount>=coins[Node]){
   // Take condition 
   int first = 1+changeCoin(coins,Node,amount-coins[Node],DP);
   // Not take condition
   int second = changeCoin(coins,Node-1,amount,DP);

   return DP[Node][amount] = min(first,second);
   }

   else {
    return DP[Node][amount] = changeCoin(coins,Node-1,amount,DP);
   }

}

int main(){
  vector<int>coins = {1,2,5};
  int amount = 11;
  int n = coins.size();
  vector<vector<int>>DP(n,vector<int>(amount+1,-1));
  int ans = changeCoin(coins,n-1,amount,DP);
  if(ans == 1e9 ) cout<<-1;
  else cout<<ans;  
} 