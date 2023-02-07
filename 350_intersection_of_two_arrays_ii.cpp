class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        vector<int> ans;
        map<int,int>m;
        for(auto i:v1){
            for(int j=0;j<v2.size();j++){
                if(i==v2[j]){
                    ans.push_back(i);
                    v2.erase(v2.begin()+j);
                    break;
                }
            }
        }
        
        
        return ans;
    }
};
