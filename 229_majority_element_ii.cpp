class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        map<int,int> m;
        vector<int> ans;
        for(auto i:v){
            m[i]++;
        }
        for(auto &i:m){
            if(i.second>v.size()/3){
                ans.push_back(i.first);
            } 
        }
        return ans;
    }
};
