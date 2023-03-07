class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int,int> m;
        for(auto i:v){
            m[i]++;
        }
        int n=v.size()/2;
        for(auto &i:m){
            if(i.second>n){
                 n=i.first;
                 break;
            }
        }
        return n;
    }
};
