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

int stairs(vector<int>&DP , int Node , int n){
  // base case 
  if(Node >= n) return 0;
  // Total number of ways using 1 
  // Total number of ways using 2
  // now we will combine both of them
  // But aaisa bhi to ho sakta hai ki 1 step 1 and eak step 2 
  // aur aaisa bhi ho sakta hai sare step 1

  
}

int main(){
  int n = 3;
  // so here we are going to do take or not take method
  // we can take one stairs and two stairs 
  vector<int>DP(n+1,0);
  int ans = stairs(DP,0,n);
  cout<<ans;
}
