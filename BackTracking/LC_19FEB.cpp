#include<bits/stdc++.h>
using namespace std;

void findPermu(int n , int& k,string ans , vector<char>alpha , string& res){
 
 if(k==0){
  return;
 }
 if(ans.size() == n){
   k--;
   if(k==0) res=ans;
   return ;
 }

 for(int i = 0 ; i <alpha.size() ; i++){
  if(ans.empty() || ans.back() != alpha[i]) {
    findPermu(n , k,ans+alpha[i] ,alpha ,res);
  }
}	

}

int main(){
  int n = 3;
  int k = 9;
  string ans = "";
  string res = "";
  vector<char>alpha = {'a','b','c'};
  findPermu(n,k,ans ,alpha,res);
  cout<<res;
}
