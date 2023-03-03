class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        vector<vector<int>> ans;
        vector<int> z;
        int a=v.size()-1;
        int b=v.size()-1;
        while(a!=-1 && b!=-1){
            z.push_back(v[a][b]);
            a--;
            if(a==-1){
                ans.push_back(z);
                z.clear();
                b--;
                a=v.size()-1;
            }
            }
            v.clear();
            v=ans;
            reverse(v.begin(),v.end());
    }
    
};
