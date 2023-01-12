class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        map<int,int> m;
        for(auto i:v){
            m[i]++;
        }
        v.clear();
        for(auto &i:m){
            v.push_back(i.first);
        }
        return v.size();
    }
};
