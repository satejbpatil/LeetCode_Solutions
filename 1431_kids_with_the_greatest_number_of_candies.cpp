class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int e) {
        // int max=0;
        vector<bool> ans;
        int max = *max_element(v.begin(), v.end());
        // cout<<max;
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]+e >= max);
        }
    return ans;
    }
};
