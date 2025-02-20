class Solution {
public:

    void findString(vector<string>& nums , int n , string& ans , string& res){
        // Base case
        if(ans.size()>n) return;

        // here we are going to find the element is present or not
        if(ans.size() == n){
            bool flag = false;
            for(int i = 0 ; i < nums.size() ; i++){
                if(nums[i]==ans){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                res = ans;
                return;
            }
        }

        ans.push_back('0');
        findString(nums,n,ans,res);
        ans.pop_back();

        ans.push_back('1');
        findString(nums,n,ans,res);
        ans.pop_back();
    }


    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans = "";
        string res = "";
        findString(nums,n,ans,res);
        return res;
    }
};