class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        map<int,int>m;
        for(auto i:v1){
            for(auto j:v2){
                if(i==j){
                    m[i]++;
                }
            }
        }
        
        v1.clear();
        for(auto &i:m){
            // if(i.second>=2){
                v1.push_back(i.first);
            // }
        }
        return v1;
    }
};
