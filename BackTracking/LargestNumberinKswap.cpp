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


void CreateLargest(string& number , int k , int moving,string& maxi){
  // base case 
  if(k==0 || moving>=number.size()){
    maxi = max(maxi,number);
    return;
  }
  char maxDigit = number[moving];
  for(int i = moving+1 ; i<number.size() ; i++){
    if(number[i]>maxDigit) maxDigit = number[i];
  }

  if(maxDigit != number[moving]){
    for(int i = moving+1 ; i<number.size() ; i++){
        if(number[i] == maxDigit){
        swap(number[i],number[moving]);
        CreateLargest(number , k-1 , moving+1,maxi);
        swap(number[i],number[moving]);
        }
    }
  }


  else{
    CreateLargest(number , k , moving+1,maxi);
  }


}

int main(){
 string number = "3435335";
 int k = 3;
 string maxi = number;
 CreateLargest(number,k,0,maxi);
 cout<<maxi;
}
