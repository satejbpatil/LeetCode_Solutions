class Solution {
public:
    vector<int> targetIndices(vector<int>& v, int t) {
        vector<int> ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==t){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
find_target_indices_after_sorting_array.cpp
