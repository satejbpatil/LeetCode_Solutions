class Solution {
public:
    int singleNumber(vector<int>& v) {
        map<int, int>m;
        int l;
        for(auto i:v){
            m[i]++;
        }
        v.clear();
        for(auto &i:m){
            if(i.second==1){
                l=i.first;
            }
        }
      return l;
    }
};
