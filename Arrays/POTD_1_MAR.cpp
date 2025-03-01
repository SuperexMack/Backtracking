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

// 2, 3, -8, 7, -1, 2, 3 == 11
// -2,-3,4,-1,-2,1,5,-3 =>7

int main(){
 vector<int> nums = {1,2,2,1,1,0};
 int n = nums.size();
 for(int i = 0 ; i <n-1 ; i++){
   if(nums[i] == nums[i+1]){
    nums[i] *= 2;
    nums[i+1] = 0;
   }
 }
 vector<int>storage;
 for(int i = 0 ; i< n; i++){
   if(nums[i]!=0) storage.push_back(nums[i]);
 }
 int counter = n-storage.size();
 for(int i = 0 ; i<counter ; i++){
    storage.push_back(0);
 }
 return storage;
} 
