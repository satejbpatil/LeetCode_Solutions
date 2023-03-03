class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        vector<int> a;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0) a.insert (a.begin(), v[i]);
            else a.push_back(v[i]);
        }
        return a;
    }
};
