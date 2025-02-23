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


int findSub(int n , int m , string& text1 , string& text2 , vector<vector<int>>&DP){
    // Base case
    if(n<0 || m<0) return 0;
    
    // origin case like aagar line wise sab equal hote rahe to

    if(DP[n][m] != -1) return DP[n][m];

    if(text1[n] == text2[m]){
    return DP[n][m] = 1 + findSub(n-1,m-1,text1,text2,DP);
    }

    else{
        return DP[n][m] =  max(findSub(n-1,m,text1,text2,DP) , findSub(n,m-1,text1,text2,DP));
    }
    
}

int main(){
  string text1 = "abc", text2 = "abc" ;
  // The Brute force to solve it to create the all subsequence and then check
  // ki konsa subsequence match kar raha hai
  // Dekh SubSequence nikalna to padega right
  int a = text1.size();
  int b = text2.size();
  vector<vector<int>>DP(a,vector<int>(b,-1));
  int ans = findSub(a-1,b-1,text1, text2,DP);
  cout<<ans;
} 