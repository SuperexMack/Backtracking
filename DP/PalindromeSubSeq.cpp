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

int findPalindrome(int i , int j , string& s , vector<vector<int>>& DP){
    // Base case
    
    if(j<i || i>j) return 0;

    if(i==j) return 1;

    if(DP[i][j] != -1) return DP[i][j];

    if(s[i] == s[j]){
        return DP[i][j] = 2 + findPalindrome(i+1,j-1,s,DP);
    }
    else{
        return DP[i][j] = max(findPalindrome(i+1,j,s,DP) , findPalindrome(i,j-1,s,DP));
    }
}

int main(){
  string s = "cbbd";
  int i = 0; 
  int j = s.size()-1;
  vector<vector<int>>DP(j+1,vector<int>(j+1,-1));
  int size = findPalindrome(i,j,s,DP);

  for(int l = 0 ; l<j+1 ; l++){
    for(int k = 0 ; k<j+1 ; k++){
        cout<<DP[l][k]<<endl;
    }
  }

  cout<<size;
} 