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


int main(){
 vector<vector<int>>rooms = {{1},{2},{3},{}};
 int n = rooms.size();
 vector<bool>visited(n,false);
 queue<int>q;
 q.push(0);
 visited[0] = true;
 while(!q.empty()){
    int topper = q.front();
    q.pop();
    for(auto it : rooms[topper]){
        if(!visited[it]){
            q.push(it);
            visited[it] = true;
        }
    }
 }
 bool flag = false;
 for(int i = 0 ; i<visited.size() ; i++){
   if(!visited[i]){
    cout<<false;
    flag = true;
    break;
   }
 }
 if(!flag) cout<<true;
}
