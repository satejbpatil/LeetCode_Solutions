class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> ans;
        int temp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        // vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
        // cout<<count<<endl;
        for(int i=0;i<count;i++){
            ans.push_back(0);
        }
        nums.clear();
        for(int i=0;i<ans.size();i++){
            nums.push_back(ans[i]);
        }
        return nums;
    }
    
};
