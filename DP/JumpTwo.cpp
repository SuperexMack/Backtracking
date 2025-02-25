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

int findJump(int Node , vector<int>&nums , vector<int>& DP){
 //Base case
 if(Node>=nums.size()-1) return 0;
 if(DP[Node]!=-1) return DP[Node];
 int Total = INT_MAX;
 for(int i = 1 ; i<=nums[Node] ; i++){
   Total = min(Total , 1+findJump(Node+i,nums,DP));
 }
 return DP[Node] = Total;
}



int main(){
 vector<int>nums = {2,3,1,1,4};
 int Node = 0;
 vector<int>DP(nums.size() , -1);
 int ans = findJump(Node,nums,DP);
 cout<<ans;
 
} 
