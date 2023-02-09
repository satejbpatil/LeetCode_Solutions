class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {
        //  vector<int> ans;
        map<int, int>m;
        for(auto i:v){
            m[i]++;
        }
        v.clear();
        for(auto &i:m){
            if(i.second==1){
                v.push_back(i.first);
            }
        }
    return v;
    }
};
