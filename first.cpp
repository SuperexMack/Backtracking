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


void solve(string ans,int node,vector<string>&storage , string ss){
   // break case 
   if(node>=ss.size()){
      storage.push_back(ans);
    return;
   }
   //now i am going to do take or not take
   
   // take case
   solve(ans+ss[node],node+1,storage,ss);
   // not-take case
   solve(ans,node+1,storage,ss);
}

int main(){
   string ss = "abcd";
   vector<string>storage;
   string ans = "";
   solve(ans,0,storage,ss);
   cout<<storage.size();
   for(int i = 0 ; i <storage.size() ; i++){
    cout<<storage[i]<<endl;
   }
}
