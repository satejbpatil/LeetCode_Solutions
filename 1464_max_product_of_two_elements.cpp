class Solution {
public:
    int maxProduct(vector<int>& v) {
        sort(v.begin(),v.end());
        
        return (v[v.size()-1]-1)*(v[v.size()-2]-1);
    }
};
