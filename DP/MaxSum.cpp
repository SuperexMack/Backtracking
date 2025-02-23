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


int MaxPathSum( vector<vector<int>>& DP,vector<vector<int>>grid,int row , int col , int i , int j){
    // Base case 
    if(i>=row || j>=col) return INT_MAX;
    if(i == row-1 && j == col-1){
        return grid[i][j];
    }

    // assume we got a number which is already visited
    if(DP[i][j]!=-1) return DP[i][j];
    
    // now we are going to do take or not take operation

    // Take

    int first = MaxPathSum(DP,grid,row,col,i+1,j);
    int second = MaxPathSum(DP,grid,row,col,i,j+1); 
    return DP[i][j] = grid[i][j] + min(first,second);
}

int main(){
  vector<vector<int>>grid = {{1,3,1},{1,5,1},{4,2,1}};
  int row = grid.size();
  int col = grid[0].size();
  vector<vector<int>>DP(row,vector<int>(col,-1));
  int ans = MaxPathSum(DP,grid,row,col,0,0);
  cout<<ans<<endl;
  cout<<"All the members are" <<endl;
  for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j<col ; j++){
        cout<<DP[i][j]<<endl;
    }
  }
} 