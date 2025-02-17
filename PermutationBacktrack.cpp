#include<bits/stdc++.h>
using namespace std;

 void helper(string& str,int n ,  vector<string>& storage,int start){
  // base case
  if(start == n-1){
   storage.push_back(str);
   return ;
  }
  
  for(int i = 0 ; i<n ; i++){
    swap(str[i],str[start]);
    helper(str,n,storage,start+1);
    swap(str[i],str[start]);
  }

 }


int main(){
 string str = "abc";
 int n = str.size();
 vector<string>storage;
 int start = 0;
 helper(str,n,storage,start);
 for(int i = 0 ; i < storage.size() ; i++){
  cout<<storage[i]<<endl;
 }
 
}
