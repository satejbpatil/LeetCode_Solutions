class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        vector<int> ans;
        for(int i=0;i<m;i++){
            ans.push_back(n1[i]);
        }
        for(int i=0;i<n;i++){
            ans.push_back(n2[i]);
        }
        sort(ans.begin(),ans.end());
        n1.clear();

        for(int i=0;i<ans.size();i++){
            n1.push_back(ans[i]);
        }
        
    }
};
