// Think Like a Mathematician and code like a Nerd
// Try to first think mathematically and pattern wise
// Don't rush keep calm and think mathematically 
// Take a rough copy and a pen and first try to solve it in a rough copy
// Feel the question 



// Twitter Username - @mohitsatitwt
// Linkedin - https://www.linkedin.com/in/mohitsatilinks/


// ----------------------------------Coding ShortCuts--------------------------------------------------



// stable_sort(mack.begin(), mack.end(), [&](int i, int j) {
//       return airDrop[i] > airDrop[j];
// });
 
// The above code is used to sort the index of the array on the basis of their value in descending order



#include<bits/stdc++.h>
using namespace std;


void permutation(string newStr ,string tiles , unordered_map<string,int>& m,int n ,vector<bool>&visited){
     // Base case
      if(newStr.size()>=1){
       m[newStr]++;
      }
     
     for(int i = 0; i < n ; i++){
      if(visited[i] == false){
         visited[i] = true;
         permutation(newStr+tiles[i] , tiles,m,n,visited);
         permutation(newStr , tiles,m,n,visited);
         visited[i] = false;
      }
     }

    }


int main(){

   string tiles = "AAABBC";
   unordered_map<string,int>m;
   int n = tiles.size();
   string newStr = "";
   vector<bool>visited(n,false);
   permutation(newStr,tiles,m,n,visited);
   cout<<m.size()<<endl;

   for(auto it : m) cout<<it.first<<endl;
}
