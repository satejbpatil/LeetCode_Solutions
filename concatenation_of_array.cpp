class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
        vector<int> ans;
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]);
        }
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]);
        }
        return ans;
    }
};
