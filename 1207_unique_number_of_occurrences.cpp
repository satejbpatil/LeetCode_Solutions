class Solution {
public:
    bool uniqueOccurrences(vector<int>& v) {
        map<int,int> m;
        set<int> s;
        for(auto i:v){
            m[i]++;
        }
        for(auto &i:m){
            s.insert(i.second);
        }
        return m.size()==s.size();
    }
};
