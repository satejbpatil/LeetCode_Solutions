class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        vector<int> ans;
        for(auto i:v){
            int sum=0;
            for(int j=0;j<i.size();j++){
                sum=sum+i[j];
            }
            ans.push_back(sum);
        }
        int max=*max_element(ans.begin(),ans.end());

        return max;
    }
};
