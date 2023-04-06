class Solution {
public:
    vector<int> shuffle(vector<int>& v, int n) {
        vector<int> a;
        for(int i=0;i<n;i++){
            a.push_back(v[i]);
            a.push_back(v[n+i]);
        }
        return a;
    }
};
