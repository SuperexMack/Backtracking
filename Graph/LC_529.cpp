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

vector<int>dx = {-1,-1,-1,0,0,1,1,1};
vector<int>dy = {-1,0,1,-1,1,-1,0,1};

int checkAllaround(vector<vector<char>>& board,int i , int j){
   int row = board.size();
   int col = board[0].size();
   int total = 0;
   for(int k = 0 ; k < 8 ; k++){
        int X = i + dx[k];
        int Y = j + dy[k];
        if(X>=0 && X<row && Y>=0 && Y<col && board[X][Y] == 'M'){
            total++; 
        }
   }
   return total;
}

void generate(vector<vector<char>>& board , vector<int>click , vector<vector<int>>& visited){
 int a = click[0];
 int b = click[1];
 if(board[a][b] == 'M'){
    board[a][b] = 'X';
    return;
 }
// now we will take a queue with pairs so that we can store index to it 

queue<pair<int,int>>q;

// now we are going to store the click index to this

q.push({a,b});

visited[a][b] = 0;

while(!q.empty()){
    auto [fa,sa] = q.front();
    q.pop();
    // now if the Element is E tab he kuch karinge ismai
    // so the thing is jaise he use apne aspas M mil gya to phir wo aage push nahi karega queue mai
    if(board[fa][sa] == 'E'){
        int counter = checkAllaround(board,fa,sa);
        if(counter>0){
            board[fa][sa] = '0' + counter;
        }
        else{
            board[fa][sa] = 'B';
            int roows = board.size();
            int cools = board[0].size();
            // now ham wo saare element iske aandar push karinge to abhi tak visit nahi hue
            // to uske liye to loop lagana padega 
            for(int  i = 0 ; i<8 ; i++){
                int X = fa + dx[i];
                int Y = sa + dy[i];
                if(X>=0 && X<roows && Y>=0 && Y<cools && board[X][Y] == 'E' && visited[X][Y] == -1){
                    q.push({X,Y});
                    visited[X][Y] = 0;
                }
            }
        }
    }
}


}

int main(){
 vector<vector<char>>board = {{'E','E','E','E','E'},{'E','E','M','E','E'},{'E','E','E','E','E'},{'E','E','E','E','E'}};
 vector<int>click = {3,0};
 int row = board.size();
 int col = board[0].size();
 vector<vector<int>>visited(row , vector<int>(col,-1));
 generate(board,click,visited);

 for(int i = 0 ; i<row ; i++){
    for(int j = 0;j< col ; j++){
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
 }

}
