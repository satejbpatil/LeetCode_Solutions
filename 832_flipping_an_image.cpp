class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& v) {
        vector<int> a;
        vector<vector<int>> an;
        for(int i=0;i<v.size();i++){
            a.clear();
            for(int j=v[i].size()-1;j>=0;j--){
                if(v[i][j]==1) a.push_back(0);
                else a.push_back(1);
            }
            an.push_back(a);
        }
        return an;
    }
};
