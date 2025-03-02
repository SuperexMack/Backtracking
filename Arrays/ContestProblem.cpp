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

// {3,25};
// {{9,80},{16,35}}


// {1,2,3,4}
// {{1,2},{2,3},{3,4},{4,5}}

// {1,2,3,4}
// {{1,10},{2,9},{3,8},{4,7}}

// {1,2,1,2}
// {{1,1},{2,3},{3,3},{2,3}}



int main(){
 vector<int>original = {1,2,3,4};
 vector<vector<int>>bounds = {{1,10},{2,9},{3,8},{4,7}};
 // now we will subtract the digits with each other
  int low = bounds[0][0];
        int high = bounds[0][1];
        int ans = high-low+1;
        int n = original.size();
        for(int i = 1 ; i< n ; i++){
            int diff = original[i]-original[i-1];
            low = max(low+diff , bounds[i][0]);
            high = min(high+diff , bounds[i][1]);
            ans = min(ans , high-low+1);
        }
        if(ans<0) return 0;
        return ans;
 
} 

