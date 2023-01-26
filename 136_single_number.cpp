class Solution {
public:
    int singleNumber(vector<int>& v) {
        unordered_map<int ,int>m;
        int ans;
        for(auto i:v){
            m[i]++;
        }
        for(auto &i:m){
            if(i.second==1){
                ans=i.first;
            }
        }
        return ans;
    }
};
