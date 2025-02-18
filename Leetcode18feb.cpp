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

bool POTD_18FEB(string pattern , string& ans , int Node , vector<bool>&visitor){
    // base case 
    if(Node==pattern.size()+1){
        return true;
    }
    
    for(int i = 1 ; i<=pattern.size()+1 ; i++){
        if(visitor[i]) continue;
        if(Node == 0 || (pattern[Node-1] == 'I' && ans.back()<'0'+i) || (pattern[Node-1] == 'D' && ans.back()>'0'+i)){
            visitor[i] = true;
            ans.push_back('0'+i);
            if(POTD_18FEB(pattern , ans , Node+1 , visitor)) return true;
            ans.pop_back();
            visitor[i] = false;
        }
    }
    return false;
}


int main(){
 string pattern = "IIIDIDDD";
 int n = pattern.size();
 vector<bool>visitor(n+2,false);
 string ans = "";
 POTD_18FEB(pattern,ans,0,visitor);
 cout<<"Value of ans is"<<endl;
 cout<<ans;
}
