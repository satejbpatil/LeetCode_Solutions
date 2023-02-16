class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& v, vector<vector<int>>& v1) {
        map<int,int>m;
        vector<int> a;
        vector<vector<int>> x;
        int q=v.size();
        int w=v1.size();
        for(int i=0;i<q;i++){
                m[v[i][0]]=v[i][1];
        }
        for(int i=0;i<w;i++){
                m[v1[i][0]]+=v1[i][1];
        }
        for(auto &i:m){
            a.push_back(i.first);
            a.push_back(i.second);
            x.push_back(a);
            a.clear();
        }
        
        return x;
    }
};
