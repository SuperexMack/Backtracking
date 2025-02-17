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


void solve(string input , string output , vector<string>&storage , int n){
   // base case
   if(input.size() == 0){
    storage.push_back(output);
    return;
   }
   for(int i = 0 ; i < input.size() ; i++){
    string firstPart = input.substr(0,i);
    string secondPart = input.substr(i+1);
    string newoutput = output+input[i];
    string newinput = firstPart+secondPart;
    solve(newinput,newoutput,storage,n);
   }
}

int main(){
   string input = "abc";
   vector<string>storage;
   string output = "";
   int n = input.size();
   solve(input,output,storage,n);
   for(int i = 0 ; i <storage.size() ; i++){
    cout<<storage[i]<<endl;
   }
}
